#include <stdio.h>

#define MIN_LENGTH 2

int Abs(int);

int main()
{
    int length;
    int difference = 0;

    //User input
    printf("\nIle liczb chcesz wypisac (>=2): ");
    scanf("%d", &length);

    //Error check
    if(length < MIN_LENGTH)
    {
        printf("\nBLAD - za mala wielkosc tablic");
        return 1;
    }

    int array[length];

    //User input along with calculating the difference
    for (int i = 0; i < length; i++)
    {
        printf("\nZostalo [%d] liczb do wypisania\nWypisz liczbe: ", length-i);
        scanf("%d", &array[i]);
        
        //The comparison between absolute numbers
        if(i == 0) continue;
        int temp = Abs(array[i] - array[i-1]);
        if(temp > difference)
        {
            difference = temp;
        }
    }
    
    //Output
    printf("\nNajwieksza absolutna roznica miedzy dwoma liczbami to [%d]", difference);

    return 0;
}

//Returns an absolute number
int Abs(int n)
{
    if(n < 0) n *= (-1);
    return n;
}