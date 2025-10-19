#include <stdio.h>

int main(void){
    
    float purchaseNet;
    float marginPercent;
    

printf("Ile wynosi cena zakupu?\n");
scanf("%f",&purchaseNet);

printf("\nIle wynosi marza?\n");
scanf("%f",&marginPercent);

printf("\nCena brutto bedzie wynosic %f\n", purchaseNet*(1 + marginPercent/100.0));

return 0;
}