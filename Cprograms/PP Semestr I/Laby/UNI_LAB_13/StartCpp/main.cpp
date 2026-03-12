#include <iostream>

using namespace std;

int c = 1;

int main()
{
    cout<<"Hello world"<<endl
    <<"W jakim jezyku jest to zapisane?\n";

    int temp = -20;
    cin>>temp;
    if(temp == c)
    {
        cout<<"Tak, to C++!";
    }
    else 
    {
        cout<<"Sprobuj ponownie!";
    }
    return 0;
}