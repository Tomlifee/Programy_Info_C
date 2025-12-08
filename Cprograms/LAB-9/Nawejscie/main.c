#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int *p = NULL;

    p = &a;
    *p = 100;

    printf("\na = %d", a);

    p = &b;
    *p = 200;

    printf("\nb = %d", b);


    return 0;
}