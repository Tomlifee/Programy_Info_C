#include <iostream>

using namespace std;

void BubbleSort(int [], int);

int main(){

    int temp = 0;
    cout<<"Wpisz dlugosc tablicy: ";
    cin>>temp;

    int tempArray[temp];
    for(int i = 0; i < temp; i++)
    {
        cout<<endl<<"Wypisz [" <<i<< "] liczbe: ";
        cin>>tempArray[i];
    }

    BubbleSort(tempArray, temp);

    for(int i = 0; i < temp; i++)
    {
        cout<<endl<<tempArray[i];
    }

    return 0;
}

void BubbleSort(int array[], int lenght)
{
    int swapAmout = 0;
    int comparisonAmount = 0;
    for(int i = 0; i < lenght - 1; i++)
    {
        for(int j = 0; j < lenght - 1; j++)
        {
            comparisonAmount++;
            //Tutaj trzeba zamienic [>] na [<], zeby sortowalo malejaco
            if(array[j] > array [j + 1])
            {
                int temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
                swapAmout++;
            }
        }
    }

    cout<<endl<<"Wykonano: "<<swapAmout<<" zamian podczas sortowania"<<endl;
}