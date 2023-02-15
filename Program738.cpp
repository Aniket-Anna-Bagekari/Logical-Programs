#include<iostream>
using namespace std;

template <class T>
T Multiply(T iNo1, T iNo2)
{
    T iAns = 0;

    iAns = iNo1 * iNo2;

    return iAns;
}

int main()
{
    int iRet = Multiply(10,20);
    cout<<"Multiplication of Integers is : "<<iRet<<"\n";

    float fRet = Multiply(10.0f,20.0f);
    cout<<"Multiplication of Floats is : "<<fRet<<"\n";

    return 0;
}