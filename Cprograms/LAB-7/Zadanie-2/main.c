#include <stdio.h>

int main()
{
    //Variables
    int rows;
    int columns;
    char c;

    //User input - array size
    printf("Wypisz liczbe wierszy i kolumn: ");
    scanf("%d", &rows);
    scanf("%d", &columns);

    //Verification
    if(rows < 1 || columns <1) 
    {
        printf("\nBLAD - Niewlasciwe wartosci wierszy i/lub kolumn!");
        return 1;
    }

    //Clears input
    while((c = getchar()) != '\n' && c != EOF);

    //User input - array values
    int originArray[rows][columns];
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            scanf("%d", &originArray[i][j]);
        }
    }

    //Clears input
    while((c = getchar()) != '\n' && c != EOF);

    //Transpositioning
    int newArray[columns][rows];
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            newArray[j][i] = originArray[i][j];
            //printf(" [%d] ", originArray[i][j]);
        }
       // printf("\n");
    }

    //printf("\n");

    //Output - the new array for the user
    for(int i = 0; i < columns; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            printf("[%d] ", newArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}