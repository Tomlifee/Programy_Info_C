#include <stdio.h>

void FirstFile(char []);
void SecondFile(char []);

int main()
{


    return 0;
}

void FirstFile(char toSave[])
{
    FILE *file_ptr;
    char buffer[1024];
    //r - odczyt
    //w - zapisanie/nadpisanie
    //a - dopisanie
    file_ptr = fopen("data.txt", "r");
    if(file_ptr == NULL)
    {
        //Spisuje informacje bledu do innego buffora
        fprintf(stderr, "\nBlad krytyczny - nie mozna odczytac pliku do zapisu!\n");
        return 1;
    }
    printf("\nStrumien pliku zostal pomyslnie zainicjowany.\n");

    char *result = fgets(buffer, sizeof(buffer), file_ptr);
    while (result != NULL)
    {
        printf("Z pliku odczytano: %s", buffer);
        result = fgets(buffer, sizeof(buffer), file_ptr);
    }
    fclose(file_ptr);

    toSave = result;
}

void SecondFile(char toWrite[])
{
    
}