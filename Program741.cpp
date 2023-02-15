#include<iostream>
using namespace std;

template <class T>
T Maximum(T *Arr, int iSize)
{
    int iCnt = 0;
    T Max = 0;

    Max = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }
    return Max;
}

int main()
{
    int Arr1[] = {10,20,30,40,50};
    float Arr2[] = {10.0f,20.0f,30.0f,40.0f,50.0f};

    int iRet = Maximum(Arr1,5);
    cout<<"Maximum integer is : "<<iRet<<"\n";

    float fRet = Maximum(Arr2,5);
    cout<<"Maximum float is : "<<fRet<<"\n";

    return 0;
}