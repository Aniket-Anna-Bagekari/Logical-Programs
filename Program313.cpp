#include<iostream>
using namespace std;

template <class T>

T Maximum(T Arr[], int iSize)
{
    int iCnt = 0;
    T Max = Arr[0];

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
    int Data[] = {110,120,320,40};
    int iRet = Maximum(Data,4);

    cout<<"Maximum of integers : "<<iRet<<"\n";

    float Dataf[] = {90.2,9.23,89.4,12.4,34.3};
    float fRet = Maximum(Dataf,5);

    cout<<"Maximum of floats : "<<fRet<<"\n";

    return 0;
}