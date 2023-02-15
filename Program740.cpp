#include<iostream>
using namespace std;

template <class T>
T AddAll(T *Arr, int iSize)
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
    int Arr1[] = {10,20,30,40,50};
    float Arr2[] = {10.0f,20.0f,30.0f,40.0f,50.0f};

    int iRet = AddAll(Arr1,5);
    cout<<"Addition of integers is : "<<iRet<<"\n";

    float fRet = AddAll(Arr2,5);
    cout<<"Addition of floats is : "<<fRet<<"\n";

    return 0;
}