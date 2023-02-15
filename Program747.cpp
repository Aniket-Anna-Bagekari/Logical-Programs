#include<iostream>
using namespace std;

template <class T>
void Reverse(T *Arr, int iSize)
{
    int End = 0, Start = 0;
    T temp;

    Start = 0;
    End = iSize - 1;

    while(Start < End)
    {
        temp = Arr[Start];
        Arr[Start] = Arr[End];
        Arr[End] = temp;

        Start++;
        End--;
    }
}

int main()
{
    int Arr1[] = {10,20,30,40,50,60};
    char Arr2[] = {'A','B','C','D','E','F'};

    Reverse(Arr1,6);
    cout<<"Reverse integers are : "<<"\n";
    for(int i = 0; i < 6; i++)
    {
        cout<<Arr1[i]<<"\t";
    }
    cout<<"\n";

    Reverse(Arr2,6);
    cout<<"Reverse characters are : "<<"\n";
    for(int i = 0; i < 6; i++)
    {
        cout<<Arr2[i]<<"\t";
    }
    cout<<"\n";
    
    return 0;
}