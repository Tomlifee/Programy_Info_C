#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    printf("\nPodaj slowo: ");

    char word[16];
    fgets(word, 16, stdin);
    //scanf("%16s", word);

    printf("\n%s\n", word);
    for(int i = strlen(word); i >= 0; i--)
    {
        printf("%c", word[i]);
    }


    return 0;
}