// Generic Programming

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

    return 0;
}