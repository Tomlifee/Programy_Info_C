#include <stdio.h>

#define BIG_LETTERS_LVAL 65
#define BIG_LETTERS_HVAL 90
#define SMALL_LETTERS_LVAL 97
#define SMALL_LETTERS_HVAL 122
#define ALPHABET_LENGHT 26

int main(){

    //Key - is the shift in the alphabet, message holds the user string
    int key;
    int message;

    //User input
    printf("\nWpisz przesuniecie (0, 1, 2, ..., 25), a nastepnie wiadomosc i wcisnij <Enter>\n");
    scanf("%d", &key);

    //Error check
    if(key < 0 || key > ALPHABET_LENGHT - 1)
    { 
        printf("\nBLAD - WARTOSC KLUCZA POZA DOZWOLONYM ZAKRESEM :<");
        return 1;
    }

    message = getchar();

    //Start of output
    printf("\nSzyfr: ");

    //The main section of the program
    while(message != '\n')
    {
        //No change - misc char
        if(message > SMALL_LETTERS_HVAL) putchar(message);
        //Small letters
        else if(message >= SMALL_LETTERS_LVAL)
        {
            //printf("\n%d",message);
            if(message + key > SMALL_LETTERS_HVAL) message = message - ALPHABET_LENGHT;
            //printf("\n%d",message);
            putchar(message + key);
        }
        //No change - misc char
        else if(message > BIG_LETTERS_HVAL) putchar(message);
        //Big letters
        else if(message >= BIG_LETTERS_LVAL)
        {
            //printf("\n%d",message);
            if(message + key > BIG_LETTERS_HVAL) message = message - ALPHABET_LENGHT;
            //printf("\n%d",message);
            putchar(message + key);
        }
        //No change - misc char
        else putchar(message);

        message = getchar();
    }

    //End of output
    printf("\nKlucz: %d", key);

    return 0;
}