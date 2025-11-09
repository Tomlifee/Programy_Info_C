#include <stdio.h>

#define BIG_LETTERS_LVAL 65
#define BIG_LETTERS_HVAL 90
#define SMALL_LETTERS_LVAL 97
#define SMALL_LETTERS_HVAL 122
#define NUMBERS_LVAL 48
#define NUMBERS_HVAL 57

int main(){

    //The forst 4 variables hold how many letters are in a string provided by the used
    int bigLetters = 0;
    int smallLetters = 0;
    int numbers = 0;
    int otherCharacters = 0;
    int temp; //For code functioning only

    //User input
    printf("\nWpisz jakies znaki i wcisnij <Enter>\n");
    temp = getchar();
    
    //The main part of the program
    while (temp != '\n')
    {
        //printf("%d \n",temp);
        //Big letters
        if(temp >= BIG_LETTERS_LVAL && temp <= BIG_LETTERS_HVAL) bigLetters++;
        //Small letters
        else if(temp >= SMALL_LETTERS_LVAL && temp <= SMALL_LETTERS_HVAL) smallLetters++;
        //Numbers
        else if (temp >= NUMBERS_LVAL && temp <= NUMBERS_HVAL) numbers++;
        //Other characters
        else otherCharacters++;
        temp = getchar();
    }

    //Output - counted and categorised number of charactes provided by user
    printf("\nBig letters - %d", bigLetters);
    printf(" Small letters - %d", smallLetters);
    printf(" Numbers - %d", numbers);
    printf(" Other characters - %d", otherCharacters);
    return 0;
}