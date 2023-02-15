#include<iostream>
using namespace std;

template <class T>

T Addition(T Arr[], int iSize)
{
    int iCnt = 0;
    T Sum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int Data[] = {10,20,30,40};
    int iRet = Addition(Data,4);

    cout<<"Addition of integers : "<<iRet<<"\n";

    float Dataf[] = {90.2,9.23,89.4,12.4,34.3};
    float fRet = Addition(Dataf,5);

    cout<<"Addition of floats : "<<fRet<<"\n";

    return 0;
}