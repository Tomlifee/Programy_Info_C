#include <stdio.h>

int main(){

    float saldo = 0;
    float gotowka = 100;
    int wybor;
    for(;;)
    {
        printf("\n[1] - Wplac gotowke\n[2] - Wyplac gotowke\n[3] - Drukuj saldo\n[0] - Wyloguj sie\n");
        scanf("%d", &wybor);
        if(wybor == 0 )return 0;
        switch (wybor)
        {
        case 1:
            printf("\nLALA");
            break;
        
        case 2:
            printf("\nLALALALAALAAL");
            break;
        case 3:
            printf("\n%f",saldo);
            break;
        case 4:
            return 0;
            break;
        default:
            break;
        }
    }

    return 0;
}