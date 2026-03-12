#include <stdio.h>

void SwapBiggestNumbers(int, int, int);

int main(){

    int k;
    scanf("%d", &k);

    int n[k];
    float result = 0.0;
    int bigestNumber = 0;
    int secondBigest = 0;

    for (int i = 0; i < k; i++)
    {
        scanf("%d", &n[i]);
        result += n[i];


        if(n[i] > bigestNumber)
        {
        secondBigest = bigestNumber;
        bigestNumber = n[i];
        }
        //SwapBiggestNumbers(n[i], bigestNumber, secondBigest);
    }

    result /= k;
    
    //Srednia
    printf("\n Srednia podanych liczb to [%.2f]", result);

    printf("\n Najwieksza liczba to [%d]", bigestNumber);
    printf("\n Druga najwieksza liczba to [%d]", secondBigest);

    return 0;
}

void SwapBiggestNumbers(int n, int first, int second)
{

    if(n > first)
    {
        second = first;
        first = n;
    }

}