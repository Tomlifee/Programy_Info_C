#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void ShowArray(int [], int);
void SelectionSort(int [], int);

int main() {
    ////////////////////////////////////////////////////////////////////////////
    //Zadanie 1
    int tab[] = {64, 25, 12, 22, 11, 10, 6, -2};
    int n = 8;

    SelectionSort(tab, n);
    ShowArray(tab, n);
    ////////////////////////////////////////////////////////////////////////////
    //Zadanie 2 i 5
    int n2;
    cout<<"\nIle liczb?";
    cin>>n2;
    int array2[n2] = {12, -4, 5, 11, 12, 30};
    auto start = high_resolution_clock::now(); // start pomiaru
    SelectionSort(array2, n2);
    auto stop = high_resolution_clock::now();  // koniec pomiaru
    auto duration = duration_cast<milliseconds>(stop - start); // czas w ms
    ShowArray(array2, n2);
    cout << "\nCzas wykonania: " << duration.count() << " ms" << endl;

    ////////////////////////////////////////////////////////////////////////////
    //Zadanie 3
    //if(tab[j] > tab[minIndex]) - tutaj trzeba zamienic znak wiekszosci
    //Jest tez to zaznaczone w funkcji SelectionSort pod main

    ////////////////////////////////////////////////////////////////////////////
    //Zadanie 4
    //Jest dodana zmienna int comparisonNumber do funkcji SelectionSort
    return 0;
}

void ShowArray(int array[], int length)
{
    for(int i = 0; i < length; i++)
    {
        cout<<"\n ["<<array[i]<<"] - "<<i;
    }
}

void SelectionSort(int tab[], int n) {
    // - Zadanie 4
    int comparisonNumber = 0;
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < n; j++) {
            //mierzy ilosc porownan - Zadanie 4
            comparisonNumber++;
            //Tutaj trzeba zamienic "<" na ">" - Zadanie 3
            if(tab[j] < tab[minIndex]) {
                minIndex = j;
            }
        }

        swap(tab[i], tab[minIndex]);
    }
    // - Zadanie 4
    cout<<endl<<"Program wykonal: "<<comparisonNumber<<" porownan";
}