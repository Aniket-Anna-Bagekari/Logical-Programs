#include<iostream>
using namespace std;

template <class T>
int Frequency(T *Arr, int iNo, int iSize)
{
    int iCnt = 0, Count = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            Count++;
        }
    }
    return Count;
}

int main()
{
    int Arr1[] = {10,20,30,10,30,40,10,40,10};
    float Arr2[] = {10.0f,20.0f,30.0f,10.0f,30.0f,40.0f,10.0f,40.0f,10.0f};

    int iRet = Frequency(Arr1,10,9);
    cout<<"Frequency of 10 is : "<<iRet<<"\n";

    float fRet = Frequency(Arr2,10.0f,9);
    cout<<"Frequency of 10.0 is : "<<fRet<<"\n";

    return 0;
}