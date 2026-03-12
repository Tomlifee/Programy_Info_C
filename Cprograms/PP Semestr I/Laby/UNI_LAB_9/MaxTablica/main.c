#include <stdio.h>

int FindMaxPtr(const int *, int);

int main()
{

    //printf

    return 0;
}

int FindMaxPtr(const int *a, int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if(max < *(a+i)) max = *(a + i);
    }
    
}