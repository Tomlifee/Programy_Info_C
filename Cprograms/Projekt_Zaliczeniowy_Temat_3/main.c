#include <stdio.h>

#pragma region Initialization
#define Length 400 //Max amount of products in the database
#define Char_Lenght 100 //Max amount of characters a product can have

typedef struct
{
    int product_code; //codes start from 0; Empty = -1
    char name[Length]; //Empty = '\0'
    int quantatiy; //Empty = 0
    float price; //Empty = 0.0
} Product; //Represents our product in the shop

//For code simplification
void EmptyTheProduct(Product *); //Gives empty values to the object
void EmptyTheArray(Product []); //Gives empty values to the array
void AssignName(Product*, char []); //Changes name of object; Used in AddProduct
void SwapName(Product*, char []); //Changes name of object; Used in ReportMinMax
void ShowName(char []); //Writes name to console
void ShowProduct(Product); //Writes all data of a product to console
void WriteMenu(); //Writes the menu to console

//Function specific
void AddProduct(Product []); //Adds new product data
void RemoveProduct(Product []); //Removes existing product data 
void ChangeQuantityProduct(Product [], int); //Adds(mode = 0)/removes(mode = 1) quantity from product
void FindProduct(Product []); //Shows product data by its product_code
void ReportAmount(Product []); //Shows all products data with quantity equal/lower to int
void ReportMinMax(Product []); //Shows all products data with the most expensive and cheapest price
#pragma endregion

int main()
{
    Product items[Length]; //Main array
    EmptyTheArray(items); //Initializes the main array
    int choice = 0; //For user deciding which function to use

    while(choice < 10)
    {
        choice = 0;
        WriteMenu();

        //User input
        if(scanf("%d", &choice) != 1)
        {
            choice = 0;
        }
        while ((getchar()) != '\n');

        //Selecting functionality
        switch(choice)
        {
            //Add item
            case 1:
            AddProduct(items);
            break;
            //Remove item
            case 2:
            RemoveProduct(items);
            break;
            //Product delivery
            case 3:
            ChangeQuantityProduct(items, 0);
            break;
            //Product sale
            case 4:
            ChangeQuantityProduct(items, 1);
            break;
            //Find product
            case 5:
            FindProduct(items);
            break;
            //Report amount
            case 6:
            ReportAmount(items);
            break;
            //Report min max
            case 7:
            ReportMinMax(items);
            break;
            //Exit
            case 10:
            return 0;
            break;

            default:
            break;
        }
    }
    return 0 ;
}

//Functions
void EmptyTheProduct(Product *item)
{
    item->name[0] = '\0';
    item->price = 0;
    item->product_code = -1;
    item->quantatiy = 0;
}

void EmptyTheArray(Product products[])
{
    for (int i = 0; i < Length; i++)
    {
        EmptyTheProduct(&products[i]);
    }
}

void AssaignName(Product *item, char newName[])
{
    for (int i = 0; i < Length; i++)
    {   
        if(newName[i] == '\0')
        {
            item->name[i-1] = '\0';//Removal of <ENTER>
            for(int j = i; j < Length; j++)
            {
                item->name[j] = '\0';
            }
            return;
        }
        //printf("\nLoop:[%d]", i);
        item->name[i] = newName[i];
    } 
}

void SwapName(Product *item, char newName[])
{
    for (int i = 0; i < Length; i++)
    {   
        if(newName[i] == '\0')
        {
            for(int j = i; j < Length; j++)
            {
                item->name[j] = '\0';
            }
            return;
        }
        //printf("\nLoop:[%d]", i);
        item->name[i] = newName[i];
    } 
}

void ShowName(char name[])
{
    printf("\n");
    for (int i = 0; i < Length; i++)
    {
        if(name[i] == '\0')
        {
            break;;
        }
        printf("%c",name[i]);
    }
}

void ShowProduct(Product product)
{
    ShowName(product.name);
    printf("\nOpis: Kod - [%d], Ilosc - [%d], Cena - [%.2f]\n", 
    product.product_code, product.quantatiy, product.price);
}

void WriteMenu()
{
    printf("\nMenedzer sklepu v1.0");
    printf("\n[1] - Dodaj nowy produkt do bazy danych");
    printf("\n[2] - Usun produkt z bazy danych");
    printf("\n[3] - Dodaj ilosc do produktu");
    printf("\n[4] - Odejmij ilosc od produktu");
    printf("\n[5] - Znajdz produkt");
    printf("\n[6] - Stworz raport - stan na magazynie");
    printf("\n[7] - Stworz raport - najwieksza/najnizsza cena\n");
    printf("\n[10] - Wyjdz\n");
}

//Adds a new product data to the main array; must have unique product_code
void AddProduct(Product products[])
{
    //Searches for space for new product
    int newProductIndex = -1;
    for(int i = 0; i < Length; i++)
    {
        if(products[i].name[0] == '\0') //An empty product
        {
            newProductIndex = i;
            break;
        }
    }

    if(newProductIndex == -1)
    {
        printf("\nBLAD - nie ma miejsca na wiecej produktow. Usun inny by zrobic miejsce");
        return;
    }
    //while ((getchar()) != '\n');

    //Assigns product_code
    int codePass = -1; //Stops the user from using negative number
    codePass = -1;
    
    printf("\nAktualnie w bazie jest (%d) produktow.\nWypisz numer produktu (musi byc unikalny i nie moze byc ujemny): "
    ,newProductIndex);
    if(scanf("%d", &codePass) != 1)
    {
        printf("BLAD - wpisano niepoprawne dane!");
        while ((getchar()) != '\n');
        return;
    }
    
    //Checks for uniqness of the product code
    for(int i = 0; i < Length; i++)
    {
        if(products[i].product_code == codePass) //An empty product
        {
            printf("BLAD - Kod musi byc unikalny!");
            return;
        }
    }
    products[newProductIndex].product_code = codePass;
    while ((getchar()) != '\n');

    //Assigns name
    printf("\nNapisz nazwe produktu (nie wstawiaj spacji przed nazwa): ");
    char buffer[Char_Lenght];
    fflush(stdin);
    fgets(buffer, Char_Lenght, stdin);
    AssaignName(&products[newProductIndex], buffer);
    //while ((getchar()) != '\n');

    //Assigns quantatiy
    int intPass = -1;
    intPass = -1;
    printf("\nWypisz ile sztuk produktu jest na magazynie (nie moze byc ujemna): ");
    if(scanf("%d", &intPass) != 1)
    {
        printf("BLAD - wpisano niepoprawne dane!");
        while ((getchar()) != '\n');
        return;
    }
    products[newProductIndex].quantatiy = intPass;
    while ((getchar()) != '\n');

    //Assigns price
    float floutPass = -1.0f;
    floutPass = -1.0f;
    printf("\nWypisz cene produktu (nie moze byc ujemna): ");
    if(scanf("%f", &floutPass) != 1)
    {
        printf("BLAD - wpisano niepoprawne dane!");
        while ((getchar()) != '\n');
        return;
    }
    products[newProductIndex].price = floutPass;
    while ((getchar()) != '\n');
    //fflush(stdin);
}
//Removes an object from the main array by its product_code variable
void RemoveProduct(Product products[])
{
    //User input
    int index;
    printf("\nWpisz numer produktu do usuniecia: ");
    if (scanf("%d", &index) != 1)
    {
        printf("\nBLAD - wpisano niepoprawne dane!");
        while ((getchar()) != '\n');
        return;
    }
    while ((getchar()) != '\n');

    //Searching for object to remove
    for (int i = 0; i < Length; i++)
    {
        if(products[i].product_code == index)
        {
            EmptyTheProduct(&products[i]);
            return;
        }
    }
    printf("\nBLAD - Nie ma takiego produktu!\n");
}
//Adds/removes quantity to the given product
void ChangeQuantityProduct(Product products[], int mode)
{
    //Product code input
    int productCode;
    printf("\nKod dostarczonego produktu: ");
    if (scanf("%d", &productCode) != 1)
    {
        printf("\nBLAD - NIE POPRAWNA WARTOSC!");
        while ((getchar()) != '\n');
        return;
    }

    while ((getchar()) != '\n');//Clears input
    
    //Product quantatiy
    int productQuantatiy;
    if (mode == 1) //Sale
    {
        printf("\nIlosc sprzedanego produktu: ");
    }
    else //Delivery
    {
        printf("\nIlosc dostarczonego produktu: ");
    }
    if (scanf("%d", &productQuantatiy) != 1)
    {
        printf("\nBLAD - NIE POPRAWNA WARTOSC!");
        while ((getchar()) != '\n');
        return;
    }

    //Checking the amount
    if (productQuantatiy < 0) 
    {
        printf("\nBLAD - NIE POPRAWNA WARTOSC!");
        while ((getchar()) != '\n');
        return;
    }

    //Adding the delivered amount to the product
    for(int i = 0; i < Length; i++)
    {
        if(products[i].product_code == productCode) //Product found
        {
            //Sale
            if(mode == 1)
            {
                if(productQuantatiy > products[i].quantatiy)
                {
                    printf("\nBLAD - ZA MALO PRODUKTU NA STANIE!");
                    return;
                }
                printf("\nSprzedaz udana!");
                products[i].quantatiy -= productQuantatiy;
            }
            else
            {
                printf("\nDostawa udana!");
                products[i].quantatiy += productQuantatiy;
            }
            return;
        }    
    }
    printf("\nBLAD - NIE ZNALEZIONO PRODUKTU!");
    return;
}
//Finds product by its code
void FindProduct(Product products[])
{
    //User input
    int code;
    printf("\nWpisz numer produktu do znalezienia: ");
    if (scanf("%d", &code) != 1)
    {
        printf("\nBLAD - wpisano niepoprawne dane!");
        return;
    }
    while ((getchar()) != '\n');

    //Searching
    for(int i = 0; i < Length; i++)
    {
        if(products[i].name[0] == '\0') //An empty product
        {
            continue;
        }
        else
        {
            if(products[i].product_code == code) //Product found
            {
                ShowProduct(products[i]);
                //ShowName(products[i].name);
                //printf("\nOpis: Kod - [%d], Ilosc - [%d], Cena - [%f]\n", 
                //products[i].product_code, products[i].quantatiy, products[i].price);
                return;
            }
        }
    }

    printf("\nNie ma produktu o takim numerze!\n");
}
//Finds items which quantity is below given value; Is prepared to return an array
void ReportAmount(Product products[])
{
    //User input
    int amount;
    printf("\nWpisz ilosc sztuk - kazdy produkt, ktorego kopii tyle wynosi lub mniej zostanie wyswietlony: ");
    if (scanf("%d", &amount) != 1)
    {
        printf("\nBLAD - wpisano niepoprawne dane!");
        while ((getchar()) != '\n');
        return;
    }
    while ((getchar()) != '\n');

    //Finding right objects and writing them to console
    //Product items[Length];
    //int j = 0; //Seperate iterator: prevents empty indexes
    for(int i = 0; i < Length; i++)
    {
        if(products[i].name[0] == '\0') //An empty product
        {
            continue;
        }
        else
        {
            if(products[i].quantatiy < amount)
            {
                ShowProduct(products[i]);
                //items[j] = products[i];
                //j++;
            }
        }
    }
    //return items;
}
//Finds the most expensive and the cheapest items; can list duplicates
void ReportMinMax(Product products[])
{
    Product minItems[Length];
    Product maxItems[Length]; //Both have such big size cuz technically all items can have the same price
    EmptyTheArray(minItems);
    EmptyTheArray(maxItems);
    int j = 0; //Seperate iterator for Min
    int k = 0; //Seperate iterator for Max; they prevent empty indexes
    minItems[0].price = 9999999.9f; //FLT_MAX; #include <float.h>
    maxItems[0].price = 0.0f;
    //Finds the products with lowest/highest price
    for(int i = 0; i < Length; i++)
    {
        if(products[i].name[0] == '\0') //An empty product
        {
            continue;
        }
        else
        {
            //MIN
            if((products[i].price == minItems[j].price)) //Adds another item of the same price
            {
                j++;
                SwapName(&minItems[j], products[i].name);
                minItems[j].product_code = products[i].product_code;
                minItems[j].quantatiy = products[i].quantatiy;
                minItems[j].price = products[i].price;//Just to be sure
            }
            else if(products[i].price < minItems[j].price) //Resets and adds a new item
            {
                j = 0;
                EmptyTheArray(minItems);
                SwapName(&minItems[j], products[i].name);
                minItems[j].product_code = products[i].product_code;
                minItems[j].quantatiy = products[i].quantatiy;
                minItems[j].price = products[i].price;
            }

            //MAX
            if((products[i].price == maxItems[k].price)) //Adds another item of the same price
            {
                k++;
                SwapName(&maxItems[k], products[i].name);
                maxItems[k].product_code = products[i].product_code;
                maxItems[k].quantatiy = products[i].quantatiy;
                maxItems[k].price = products[i].price;//Just to be sure
            }
            else if(products[i].price > maxItems[k].price) //Resets and adds a new item
            {
                k = 0;
                EmptyTheArray(maxItems);
                SwapName(&maxItems[k], products[i].name);
                maxItems[k].product_code = products[i].product_code;
                maxItems[k].quantatiy = products[i].quantatiy;
                maxItems[k].price = products[i].price;
            }
        }
    }

    printf("\nNajtanszy produkt/y to:");
    for(int i = 0; i < j + 1; i++)
    {
        ShowProduct(minItems[i]);
    }

    printf("\nNajdrozszy produkt/y to:");
    for(int i = 0; i < k + 1; i++)
    {
        ShowProduct(maxItems[i]);
    }
}