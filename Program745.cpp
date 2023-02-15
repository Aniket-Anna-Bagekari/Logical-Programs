#include<iostream>
using namespace std;

template <class T>
int FirstOccurence(T *Arr, int iNo, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt + 1;
    }
}

int main()
{
    int Arr1[] = {10,20,30,10,30,40,10,40,10};
    float Arr2[] = {10.0f,20.0f,30.0f,10.0f,30.0f,40.0f,10.0f,40.0f,10.0f};

    int iRet = FirstOccurence(Arr1,40,9);
    cout<<"First occurence of 40 is : "<<iRet<<"\n";

    float fRet = FirstOccurence(Arr2,40.0f,9);
    cout<<"First occurence of 40.0 is : "<<fRet<<"\n";
    
    return 0;
}