#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void TwinBubble(int [], int);
void ShowArray(int [], int);

int main() {
    auto start = high_resolution_clock::now(); // start pomiaru

    auto stop = high_resolution_clock::now();  // koniec pomiaru
    auto duration = duration_cast<milliseconds>(stop - start); // czas w ms
    cout << "\nCzas wykonania: " << duration.count() << " ms" << endl;
    ////////////////////////////////////////////////////////////////////////////
    //Zadanie 1
    int tab[] = {4, 11, 9, 10, 3, 5};
    int n = 6;

    TwinBubble(tab, n);
    ShowArray(tab, n);

    ////////////////////////////////////////////////////////////////////////////
    //Zadanie 2
    int n2 = 10;
    int array2[n2];
    for(int i = 0; i < n2; i++)
    {
        cout<<"Wypisz jeszcze: "<<n2-i<<" liczb: ";
        cin>>array2[i];
    }
    TwinBubble(array2, n2);
    ShowArray(array2, n2);

    ////////////////////////////////////////////////////////////////////////////
    //Zadanie 3

    return 0;
}

void ShowArray(int array[], int length)
{
    for(int i = 0; i < length; i++)
    {
        cout<<"\n ["<<array[i]<<"] - "<<i;
    }
}

void TwinBubble(int tab[], int n) {
    bool zamiana = true;

    while (zamiana) {
        zamiana = false;

        // Przesuwamy w prawo
        //Tu zamienic "<" na ">" - Zadanie 3
        for (int i = 0; i < n-1; i++) {
            if (tab[i] > tab[i + 1]) {
                swap(tab[i], tab[i + 1]);
                zamiana = true;
            }
        }

        if (!zamiana) break;

        zamiana = false;

        // Przesuwamy w lewo
        for (int i = n - 1 - 1; i >= 0; i--) {
            //Tu zamienic "<" na ">" - Zadanie 3
            if (tab[i] > tab[i + 1]) {
                swap(tab[i], tab[i + 1]);
                zamiana = true;
            }
        }
    }
}