#include <stdio.h>

#define ACCOUNT_MAX 100

int AccountSelect();
float MoneyChange(int);

int main(){
    double usersBalance[ACCOUNT_MAX];

    int choice;
    int currentUser;
    for(;;)
    {
        //Entry logic
        printf("\n[1] - Wplac gotowke\n[2] - Wyplac gotowke\n[3] - Drukuj saldo\n[0] - Wyloguj sie\n");
        scanf("%d", &choice);
        if(choice == 0 ) 
        {
            printf("\nDziekujemy za korzystanie z naszych uslug, zapraszamy ponownie!");
            return 0;
        }

        //Account logic
        currentUser = AccountSelect();
        if(currentUser == 0) choice = 1273;

        //Code proper
        switch (choice)
        {
        //Deposit money
        case 1:
            usersBalance[currentUser-1] =+ MoneyChange(1);
            printf("\nPomyslnie wplacono pieniadze");
            break;
        //Withdraw money
        case 2:
            float temp = MoneyChange(2);
            //Not enough balance
            if(usersBalance[currentUser-1] < temp)
            {
                printf("\nBLAD - niewystarczajaca ilosc pieniedzy");
            }
            //Proper withdraw
            else
            {
                usersBalance[currentUser-1] =- temp;
                printf("\nPomyslnie wyplacono pieniadze");
            }
            break;
        //Balance check
        case 3:
            printf("\n%f",usersBalance[currentUser-1]);
            break;
        default:
            break;
        }
    }

    return 0;
}

//For selecting an account (all options execpt log out)
int AccountSelect()
{
    int temp;
    printf("\nWybierz swoj indeks uzytkownika (1 - 100)");
    scanf("%d", &temp);

    if(temp < 1 || temp > ACCOUNT_MAX) 
    {
        printf("\nBLAD - indeks poza zakresem (1 - 100)");
        return 0;
    }

    return temp;
}

//For money deposit/withdraw
float MoneyChange(int mode)
{
    printf("\nWpisz kwote do");
    if (mode == 1)printf(" wplacenia: ");
    else if (mode == 2)printf(" wyplacenia: ");
    
    float temp;
    scanf("%f", &temp);

    return temp;
}