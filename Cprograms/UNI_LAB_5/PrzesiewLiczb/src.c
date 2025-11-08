#include <stdio.h>

int main(){

    int counter = 0;
    for (int i = 0; i < __INT_MAX__; i++)
    {
        if(i%3==0)continue;

        if(i == 7*11) break;

        printf("\n%d",i);
        counter++;
    }
    
    printf("\nWypisano %d liczb",counter);
    return 0;
}