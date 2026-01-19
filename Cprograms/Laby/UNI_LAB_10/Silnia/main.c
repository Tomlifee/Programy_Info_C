#include <stdio.h>

int Silnia (int);

int main()
{
    int n;
    scanf("%d", &n);

    printf("Silnia %d wynosi: %d", n, Silnia(n));

    return 0;
}

int Silnia(int n)
{
    if(n <= 0) return 1;
    return n * Silnia(n-1);
}