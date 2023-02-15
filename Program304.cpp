#include<iostream>
using namespace std;

template <class T>

T Addition(T i, T j)
{
    T Ans;
    Ans = i + j;

    return Ans;
}

int main()
{
    double a = 11.9, b = 10.1, dRet = 0.0;
    dRet = Addition(a,b);
    cout<<"Addition is : "<<dRet<<"\n";

    int x = 11, y = 10, iRet = 0;
    iRet = Addition(x,y);
    cout<<"Addition is : "<<iRet<<"\n";

    return 0;
}