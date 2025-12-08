#include <stdio.h>

int main()
{
    int x = 5;
    int *px = &x; //px przechowuje adres x

    printf("Przed: x = %d\n", x);
    *px = 10; //Zmiana x poprzez wskaźnik
    printf("Po: x = %d\n", x);

    return 0;
}