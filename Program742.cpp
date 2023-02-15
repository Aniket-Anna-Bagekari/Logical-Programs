#include<iostream>
using namespace std;

template <class T>
T Minimum(T *Arr, int iSize)
{
    int iCnt = 0;
    T Min = 0;

    Min = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < Min)
        {
            Min = Arr[iCnt];
        }
    }
    return Min;
}

int main()
{
    int Arr1[] = {10,20,30,40,50};
    float Arr2[] = {10.0f,20.0f,30.0f,40.0f,50.0f};

    int iRet = Minimum(Arr1,5);
    cout<<"Minimum integer is : "<<iRet<<"\n";

    float fRet = Minimum(Arr2,5);
    cout<<"Minimum float is : "<<fRet<<"\n";

    return 0;
}