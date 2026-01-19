#include <stdio.h>

int main(void){

    float cmetry;
    printf("Wpisz centrymetry: ");
    scanf("%f",&cmetry);
    float metry = cmetry/100;
    printf("\nTo jest %f metrow",metry);

    printf("\nWpisz mile: ");
    float mile;
    scanf("%f",&mile);
    float kmetry = mile * 1.6;
    printf("\nJest to %f kilometrow",kmetry);

    return 0;
}