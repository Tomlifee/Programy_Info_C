#include <stdio.h>

int Fibonaci (int);

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d liczba ciagu Fibbonaciego wynosi: %d", n + 2, Fibonaci(n));

    return 0;
}

int Fibonaci(int n)
{
    if(n <= 0) return 1;
    return Fibonaci(n-2) + Fibonaci(n-1);
}