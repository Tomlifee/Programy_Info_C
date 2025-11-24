#include <stdio.h>

int main()
{

    int sArray[3][3] = 
    {
        {1, 4, 7},
        {5, 9, 3},
        {7, 8, 1}
    };

    int min = 10000000;
    int max = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(sArray[i][j] > max) max = sArray[i][j];
            if (sArray[i][j] < min) min = sArray[i][j];            
        }
    }

    printf("\nMIN - [%d]; MAX - [%d]", min, max);

    return 0;
}