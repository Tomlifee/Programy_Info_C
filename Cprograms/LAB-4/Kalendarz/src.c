#include <stdio.h>

int main(){
    int numberOfDays;
    int startingDayOfWeek;
    int weekEnder = 1;

    printf("Wpisz liczbe dni w miesiacu: ");
    scanf("%d", &numberOfDays);

    if(numberOfDays > 999)
    {
        printf("\nWpisz liczbe mniejsza niz 1000!");
        return 0;
    }

    printf("\nWpisz dzien rozpoczynajacy tydzien (1 - Niedziela, 7 - Sobota): ");
    scanf("%d", &startingDayOfWeek);

    printf("\n  Nd Pon  Wt  Sr Czw  Pt  Sb\n");

    for(int i = 1; i < startingDayOfWeek; i++)
    {
        printf("    ");
        weekEnder++;
    }

    for(int i = 1; i <= numberOfDays; i++)
    {
        printf("%4d", i);
        if(weekEnder % 7 == 0) printf("\n");
        weekEnder++; 
    }

    return 0;
}