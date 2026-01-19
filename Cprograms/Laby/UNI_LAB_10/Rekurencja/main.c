#include <stdio.h>

int Division (int, int, int);

int main()
{
    int n;
    scanf("%d", &n);


    printf("Wynosi: %d", Division(n, 2, 0));

    return 0;
}

int Division(int n, int d, int i)
{
    if(n <= 0) return i;
    i++;
    return Division(n-d, d, i);
}