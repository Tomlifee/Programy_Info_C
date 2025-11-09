#include <stdio.h>

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
        if(temp >= 65 && temp <=90) bigLetters++;
        //Small letters
        else if(temp >= 97 && temp <=122) smallLetters++;
        //Numbers
        else if (temp >= 48 && temp <= 57) numbers++;
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