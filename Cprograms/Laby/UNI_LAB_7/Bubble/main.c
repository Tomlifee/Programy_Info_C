#include <stdio.h>

#define Length 9

int main()
{
    int array[] = {2, 4, 6, 9, -1, 0, -2, 4, 4};

    //Bubble bubble
    for(int i = 0; i < Length; i++)
    {
        for (int j = 1; j < Length; j++)
        {
            if(array[j-1] > array[j])
            {
                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
    }

    for(int i = 0; i < Length; i++)
    {
        printf("\n[%d]", array[i]);
    }

    return 0;
}