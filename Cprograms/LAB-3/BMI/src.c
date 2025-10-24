#include <stdio.h>

int main(){
    float mass;
    float height;
    float bmi;

    printf("Wpisz wage w kg\n");
    scanf("%f", &mass);

    printf("Wpisz wzrost w m\n");
    scanf("%f", &height);

    bmi = mass / (height*height);

    printf("\nTwoje BMI wynosi - %f ", bmi);
    if(bmi < 18.5f) printf("(Niedowaga)");
    else if(bmi <24.9) printf("Prawidlowa waga");
    else if(bmi <29.9) printf("Nadwaga");
    else printf("Otylosc");

    return 0;
}