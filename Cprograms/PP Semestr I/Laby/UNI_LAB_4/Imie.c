#include <stdio.h>

int main(){

    int n;
    printf("Wpisz ile razy ma sie moje imie wyswietlic\n");
    scanf("%d",&n);
    int j = 0;
    while (j<n)
    {
    //for (int i = 0; i < 3 ; i++){

        printf("\n%d",j);
        //if (j%2==0) printf("\n%d",j);
        //printf("Tomasz Baginski\n");
        j+=2;

    //}
    }


    return 0;
}