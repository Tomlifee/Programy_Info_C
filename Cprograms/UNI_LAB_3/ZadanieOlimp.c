#include <stdio.h>
#include <stdbool.h>

int main(){

    int n[3];
    bool bN[3];
    printf("Wpisz 3 liczby ");
    scanf("%d",&n[0]);
    scanf("%d",&n[1]);
    scanf("%d",&n[2]);

    printf("\nTAK");

    for (int i = 0; i< 3;i++){

        if (n[i]%2 == 0){
            bN[i] = true;
    }
    }

    if(bN[0] == true){
        
        if (bN[1] == true){
            printf("%d + %d", n[0], n[1]);
        }
        else if (bN[2] == true){
            printf("%d + %d", n[0], n[2]);
        }
        else{
            printf("%d + %d", n[1], n[2]);
        }
    }
    else{
        if (bN[1] == false){
            printf("%d + %d", n[0], n[1]);
        }
        else if (bN[2] == false){
            printf("%d + %d", n[0], n[2]);
        }
        else{
            printf("%d + %d", n[1], n[2]);
        }
    }

    return 0;
}