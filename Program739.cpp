#include<iostream>
using namespace std;

template <class T>
T Maximum(T iNo1, T iNo2, T iNo3)
{
    T iMax = 0;

    iMax = iNo1;

    if(iNo2 > iMax)
    {
        iMax = iNo2;
    }

    if(iNo3 > iMax)
    {
        iMax = iNo3;
    }

    return iMax;
}

int main()
{
    int iRet = Maximum(11,21,51);
    cout<<"Maximum of Integers is : "<<iRet<<"\n";

    float fRet = Maximum(11.0f,21.0f,51.0f);
    cout<<"Maximum of Floats is : "<<fRet<<"\n";

    return 0;
}