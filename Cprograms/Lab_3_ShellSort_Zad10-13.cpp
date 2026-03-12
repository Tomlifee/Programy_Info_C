#include <iostream>

using namespace std;

void ShowArray(int [], int);
void ShellSort(int [], int);

int main() {
    ////////////////////////////////////////////////////////////////////////////
    //Zadanie 10
    int tab[] = {9, 8, 3, 7, 5, 6, 4, 1};
    int n = 8;

    ShellSort(tab, n);
    ShowArray(tab, n);
    ////////////////////////////////////////////////////////////////////////////
    //Zadanie 11
    int n2;
    cout<<"\nIle liczb?";
    cin>>n2;
    int array2[n2] = {12, -4, 5, 11, 12, 30};

    ShellSort(array2, n2);
    ShowArray(array2, n2);

    ////////////////////////////////////////////////////////////////////////////
    //Zadanie 12
    //for(j = i; j >= gap && tab[j-gap] < temp; j -= gap) - tutaj trzeba zamienic znak wiekszosci
    //i przez zlozonosc algorytmu nie jest to takie oczywiste jak wczesniej
    //Jest tez to zaznaczone w funkcji ShellSort pod main

    ////////////////////////////////////////////////////////////////////////////
    //Zadanie 13
    //Jest dodana zmienna int swapNumber do funkcji ShellSort
    return 0;
}

void ShowArray(int array[], int length)
{
    for(int i = 0; i < length; i++)
    {
        cout<<"\n ["<<array[i]<<"] - "<<i;
    }
}

void ShellSort(int tab[], int n) {
    // - Zadanie 13
    int swapNumber = 0;
    for(int gap = n/2; gap > 0; gap /= 2) {

        for(int i = gap; i < n; i++) {

            int temp = tab[i];
            int j;

            //Tutaj trzeba zmienic ">" na "<" przez zmienna "temp" - Zadanie 12
            for(j = i; j >= gap && tab[j-gap] > temp; j -= gap)
            {
                tab[j] = tab[j-gap];
                // - Zadanie 13
                swapNumber++;
            }


            tab[j] = temp;
        }
    }
    // - Zadanie 13
    cout<<endl<<"Program wykonal: "<<swapNumber<<" zamian";
}