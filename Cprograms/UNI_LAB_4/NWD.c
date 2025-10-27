#include <stdio.h>

int main(){

    int a;
    int b;
    int r;
    scanf("%d",&a);
    scanf("%d",&b);

    while(b!=0){
        r = a%b;
        a=b;
        b=r;
    }

    /*
    while (a!=b)
    {
        if(a>b){
            a = a-b;
        }
        else{
            b = b - a;
        }
    }*/
    printf("\n%d",a);
}