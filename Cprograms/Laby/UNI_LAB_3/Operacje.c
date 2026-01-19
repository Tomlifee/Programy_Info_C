#include <stdio.h>

int test1();

int main (void){

    int comparisonA;
    int comparisonB;

    test1();

    printf("First number\n");
    scanf("%d", &comparisonA);
    printf("Second number\n");
    scanf("%d", &comparisonB);
    if(comparisonA > comparisonB){
        printf("\n%d is bigger", comparisonA);    
    }
    else if(comparisonA == comparisonB){
        printf("\nThe numbers are equal");
    }
    else{

        printf("\n%d is bigger", comparisonB);
    }

    return 0;
}

int test1() {

    printf("\n Hello");
    return 0;
}