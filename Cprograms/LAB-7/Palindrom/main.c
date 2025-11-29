#include <stdio.h>
#include <ctype.h>

#define LENGTH 100

int main()
{
    //Variables
    int count = 0;
    char sentence[LENGTH];
    //User input
    fgets(sentence, LENGTH, stdin);

    //Counting length and lowering the case
    while(sentence[count] != '\0')
    {
        //Jesli nie mozna uzywac nowych bibliotek to by trzeba bylo zrobic funkcje ktora robi if(X[i] == 'A')X[i] = 'a'...
        sentence[count] = tolower(sentence[count]); 
        count++;
    }
    count--;
    
    //printf("\n[%d]", count);

    //Main part of the program - checking for palindrom
    for(int i = 0; i < count; i++)
    {
       if(sentence[i] != sentence[count - (1 + i)]) 
       {
        printf("\nNie jest palindromem");
        return 1;
       }
    }

    printf("\nJest palindromem");

    return 0;
}