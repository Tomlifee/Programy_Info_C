#include <iostream>

using namespace std;

void ShowArray(int [], int);
void InsertionSort(int [], int);

int main() {
    ////////////////////////////////////////////////////////////////////////////
    //Zadanie 6
    int tab[] = {64, 25, 12, 22, 11, -2};
    int n = 6;

    InsertionSort(tab, n);
    ShowArray(tab, n);
    ////////////////////////////////////////////////////////////////////////////
    //Zadanie 7
    int n2;
    cout<<"\nIle liczb?";
    cin>>n2;
    int array2[n2] = {12, -4, 5, 11, 12, 30};
    InsertionSort(array2, n2);
    ShowArray(array2, n2);

    ////////////////////////////////////////////////////////////////////////////
    //Zadanie 8
    //while(j >= 0 && tab[j] < key) - tutaj trzeba zamienic znak wiekszosci
    //Jest tez to zaznaczone w funkcji InsertionSort pod main

    ////////////////////////////////////////////////////////////////////////////
    //Zadanie 9
    //Jest dodana zmienna int swapNumber do funkcji InsertionSort
    return 0;
}

void ShowArray(int array[], int length)
{
    for(int i = 0; i < length; i++)
    {
        cout<<"\n ["<<array[i]<<"] - "<<i;
    }
}

void InsertionSort(int tab[], int n) {
    // - Zadanie 9
    int swapNumber = 0;
    for(int i = 1; i < n; i++) {

        int key = tab[i];
        int j = i - 1;

        //Tutaj nalezy zamnienic ">" na "<" przed zmienna "key" - Zadanie 8
        while(j >= 0 && tab[j] > key) {
            tab[j + 1] = tab[j];
            j--;
            // - Zadanie 9
            swapNumber++;
        }

        tab[j + 1] = key;
    }
    // - Zadanie 9
    cout<<endl<<"Program wykonal: "<<swapNumber<<" przesuniec";
}