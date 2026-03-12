#include <stdio.h>

int main(){

    int k;
    printf("Program wypisuje liczby od 50 do 100 podzielne przez wpisana liczbe.\nWpisz liczbe naturalna (bez 0), ktora bedzie dzielnikiem ");
    scanf("%d",&k);
    if(k<=0)
    {
        printf("\nDzielnik musi byc wiekszy niz 0!");
        return 0;
    }
    for (int i = 50; i <= 100; i++)
    {
        if(i%k==0)
        {
            printf("\n%d - dzieli sie przez %d",i,k);
        }
    }

    return 0;
}