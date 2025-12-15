#include <stdio.h>

void GetStats(const int *, int, int *, int *, double *);

int main()
{
    int min = 0;
    int max = 0;
    double avg = 0;

    int lenght;
    //User input - array size
    printf("Wypisz wielkosz tablicy: ");
    scanf("%d", &lenght);

    //Verification
    if(lenght < 1 ) 
    {
        printf("\nBLAD - Niewlasciwe wartosci wierszy i/lub kolumn!");
        return 1;
    }

    //User input - array values
    int array[lenght];
    for(int i = 0; i < lenght; i++)
    {
        scanf("%d", &array[i]);
    }

    GetStats(array, lenght, &min, &max, &avg);

    printf("min - [%d], max - [%d], avg - [%f]", min, max, avg);

    return 0;
}

void GetStats(const int *tab, int n, int *min, int *max, double *avg)
{
    *min = *(tab);
    *max = *(tab);
    *avg = 0.0;

    int i = 0;
    for (; i < n; i++)
    {
        if(*(tab+i) > *max) *max = *(tab+i);
        if(*(tab+i) < *min) *min = *(tab+i);
        *avg += *(tab+i);
    }
    
    *avg /= i;
}