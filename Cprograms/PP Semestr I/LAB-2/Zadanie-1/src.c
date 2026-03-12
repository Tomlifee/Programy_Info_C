#include <stdio.h>

int main(void){
    

    float amountPLN;
    float rate;
    //float amountUSD;
    

printf("Ile PLN chcesz przeliczyc?\n");
scanf("%f",&amountPLN);

printf("\nJaki jest dzisiejszy kurs?\n");
scanf("%f",&rate);

printf("Bedzie to %f USD\n", amountPLN*rate);

//Troche przy poleceniu nie bylem pewny czy "amountUSD drukowane z %f" ma oznaczac uzycie osobnej zmiennej czy nie
//amountUSD = amountPLN*rate;
//printf("Bedzie to %f USD\n", amountUSD);

return 0;
}