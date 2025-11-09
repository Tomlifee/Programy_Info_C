#include <stdio.h>

int main(){

    //Key - is the shift in the alphabet, message holds the user string
    int key;
    int message;

    //User input
    printf("\nWpisz przesuniecie (0, 1, 2, ..., 25), a nastepnie wiadomosc i wcisnij <Enter>\n");
    scanf("%d", &key);

    //Error check
    if(key < 0 || key > 25)
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
        if(message > 122) putchar(message);
        //Small letters
        else if(message > 96)
        {
            //printf("\n%d",message);
            if(message + key > 122) message = message - 26;
            //printf("\n%d",message);
            putchar(message + key);
        }
        //No change - misc char
        else if(message > 90) putchar(message);
        //Big letters
        else if(message > 64)
        {
            //printf("\n%d",message);
            if(message + key > 90) message = message - 26;
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