#include <stdio.h>

#define Length 100

typedef struct
{
    int product_code;//codes start from 1
    char name[Length];
    int quantatiy;
    float price;
} Product;

void AddProduct(Product []);
void RemoveProduct(Product [], int);
void SwapName(Product*, char []);
void ShowName(char []);

int main()
{
    Product items[Length];
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
            printf("\n Wpisz numer produkty do usuniecia: ");
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
            printf("\n Wpisz numer produktu do znalezienia: ");
            scanf("%d", &choice);
            while ((getchar()) != '\n');

            //He needs to find an item by its product_code not index
            ShowName(items[choice].name);
            printf("\nOpis: Kod - [%d], Ilosc - [%d], Cena - [%f]\n", 
            items[choice].product_code, items[choice].quantatiy, items[choice].price);

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

void RemoveProduct(Product products[], int index)
{
    for (int i = 0; i < Length; i++)
    {
        if(products[i].product_code == index)
        {
            products[i].product_code = -1;
            //SwapName(&products[i], '\0');
            products[i].price = 0;
            products[i].quantatiy = 0;
            break;
        }
    }
    
}