#include <stdio.h>

#define Length 100

int my_srlen(const char[Length]);

int main()
{
    //Variables
    char buffer[Length];
 
    //User input
    fgets(buffer, Length, stdin);

    //Output
    printf("Twoj tekst ma %d znakow", my_srlen(buffer));

    return 0;
}

//Personal Srlen function
int my_srlen(const char w[Length])
{
    int i = 0;

    //Counting words
    for(; i < Length; i++)
    {
        if(w[i] == '\0') break;
    }

    //The '\0' character fixup
    i--;

    return i;
}