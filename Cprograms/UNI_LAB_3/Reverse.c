#include <stdio.h>

void FunkcjaProsta();
void FunkcjaZlozona();

int main(){

    //FunkcjaProsta();
    FunkcjaZlozona();

    return 0;
}

void FunkcjaZlozona(){

    int length;
    int temp;
    printf("Ile liczb chcesz odwrocic?\n");
    scanf("%d", &length);

    int numbers[length];

    //Przypisanie
    for (int i = 0; i < length; i++)
    {
        printf("\n[%d] Liczba: ",i);
        scanf("%d",&numbers[i]);
    }
    
    //Odwrocenie
    for (int i = 0; i < length - 1; i++)
    {
        temp = numbers[i];
        numbers[i] = numbers[length - 1 + (-i)];
        numbers[length - 1 + (-i)] = temp;   
    }

    //Wypisanie
    for (int i = 0; i < length; i++){
        printf("\n%d",numbers[i]);
    }
}

void FunkcjaProsta(){

    int a;
    int b;
    int c;

    printf("Wypisz 3 liczby: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int temp = a;

    a = c;
    c = temp;

    printf("\nOdwrocenie to: [%d] [%d] [%d]", a, b, c);

}