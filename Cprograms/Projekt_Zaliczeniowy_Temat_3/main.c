#include <stdio.h>

#pragma region Initialization
#define Length 100

typedef struct
{
    int product_code;//codes start from 1
    char name[Length];
    int quantatiy;
    float price;
} Product;

void EmptyTheProduct(Product *);
void EmptyTheArray(Product []);
void AddProduct(Product []);
void RemoveProduct(Product [], int);
void SwapName(Product*, char []);
void ShowName(char []);
void FindProduct(Product [], int);
void ReportAmount(Product [], int);
void ReportMinMax(Product []);
#pragma endregion

int main()
{
    Product items[Length];
    EmptyTheArray(items);
    int choice = 0;
    while(choice < 10)
    {
        scanf("%d", &choice);
        while ((getchar()) != '\n');
        switch(choice)
        {
            //Add item
            case 1:
            AddProduct(items);
            break;
            //Remove item
            case 2:
            printf("\nWpisz numer produktu do usuniecia: ");
            scanf("%d", &choice);
            while ((getchar()) != '\n');

            RemoveProduct(items, choice);

            choice = 0;
            break;
            //Product delivery
            case 3:
            break;
            //Product sale
            case 4:
            break;
            //Find product
            case 5:
            printf("\nWpisz numer produktu do znalezienia: ");
            scanf("%d", &choice);
            while ((getchar()) != '\n');

            FindProduct(items, choice);
            choice = 0;
            break;
            //Raport
            case 6:
            break;

            //Exit
            case 10:
            return 0;
            break;
        }
    }
    
    return 0 ;
}

//DONE
void SwapName(Product *item, char newName[])
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
//DONE
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
//DONE
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
    while ((getchar()) != '\n');
    //Assigns product_code
    int codePass = -1; //Stops the user from using negative number
    codePass = -1;
    //There needs to be a check to stop codes from multipling or being overwritten
    while(codePass < 0)
    {
        printf("\nZalecany kod to [%d] \nWypisz numer produktu (musi byc unikalny i nie moze byc ujemny): "
        ,newProductIndex);
        scanf("%d", &codePass);
    }
    products[newProductIndex].product_code = codePass;
    while ((getchar()) != '\n');

    //Assigns name
    printf("\nNapisz nazwe produktu (nie wstawiaj spacji przed nazwa): ");
    char buffer[Length];
    fflush(stdin);
    fgets(buffer, Length, stdin);
    SwapName(&products[newProductIndex], buffer);
    while ((getchar()) != '\n');

    //Assigns quantatiy
    int intPass = -1;
    intPass = -1;
    while(intPass < 0)
    {
        printf("\nWypisz ile sztuk produktu jest na magazynie (nie moze byc ujemna): ");
        scanf("%d", &intPass);
    }
    products[newProductIndex].quantatiy = intPass;
    while ((getchar()) != '\n');

    //Assigns price
    float floutPass = -1.0f;
    floutPass = -1.0f;
    while(floutPass < 0)
    {
        printf("\nWypisz cene produktu (nie moze byc ujemna): ");
        scanf("%f", &floutPass);
    }
    products[newProductIndex].price = floutPass;

    //fflush(stdin);
    while ((getchar()) != '\n');
}
//DONE
void RemoveProduct(Product products[], int index)
{
    for (int i = 0; i < Length; i++)
    {
        if(products[i].name[0] == '\0') //An empty product
        {
            continue;
        }
        if(products[i].product_code == index)
        {
            EmptyTheProduct(&products[i]);
            printf("\n[Hellooooooooo]\n");
            return;
        }
    }
    printf("\nNie ma takiego produktu!\n");
}
//Finds product by its code; DONE
void FindProduct(Product products[], int code)
{
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
                ShowName(products[i].name);
                printf("\nOpis: Kod - [%d], Ilosc - [%d], Cena - [%f]\n", 
                products[i].product_code, products[i].quantatiy, products[i].price);
                return;
            }
        }
    }

    printf("\nNie ma produktu o takim numerze!\n");
}
//Finds items which quantity is below given value; Done?; Is prepared to return an array
void ReportAmount(Product products[], int amount)
{
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
                ShowName(products[i].name);
                printf("\nOpis: Kod - [%d], Ilosc - [%d], Cena - [%f]\n", 
                products[i].product_code, products[i].quantatiy, products[i].price);
                return;

                //items[j] = products[i];
                //j++;
            }
        }
    }
}
//Finds the most expensive and the cheapest items; Done?
void ReportMinMax(Product products[])
{
    Product minItems[Length];
    Product maxItems[Length]; //Both have such big size cuz technically all items can have the same price
    EmptyTheArray(minItems);
    EmptyTheArray(maxItems);
    int j = 0; //Seperate iterator for Min
    int k = 0; //Seperate iterator for Max: prevents empty indexes
    minItems[0].price = 0.0f;
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
            if(products[i].price = minItems[j].price) //Adds another item of the same price
            {
                j++;
                SwapName(&minItems[j], products[i].name);
                minItems[j].product_code = products[i].product_code;
                minItems[j].quantatiy = products[i].quantatiy;
                minItems[j].price = products[i].price;//Just to be sure
                return;
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
            if(products[i].price = maxItems[k].price) //Adds another item of the same price
            {
                k++;
                SwapName(&maxItems[k], products[i].name);
                maxItems[k].product_code = products[i].product_code;
                maxItems[k].quantatiy = products[i].quantatiy;
                maxItems[k].price = products[i].price;//Just to be sure
                return;
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
        ShowName(minItems[i].name);
        printf("\nOpis: Kod - [%d], Ilosc - [%d], Cena - [%f]\n", 
        minItems[i].product_code, minItems[i].quantatiy, minItems[i].price);
    }

    printf("\nNajdrozszy produkt/y to:");
    for(int i = 0; i < k + 1; i++)
    {
        ShowName(maxItems[i].name);
        printf("\nOpis: Kod - [%d], Ilosc - [%d], Cena - [%f]\n", 
        maxItems[i].product_code, maxItems[i].quantatiy, maxItems[i].price);
    }
}
//DONE
void EmptyTheProduct(Product *item)
{
    item->name[0] = '\0';//Do not know why it has a *
    item->price = 0;
    item->product_code = -1;
    item->quantatiy = 0;
}
//DONE
void EmptyTheArray(Product products[])
{
    for (int i = 0; i < Length; i++)
    {
        EmptyTheProduct(&products[i]);
    }
}