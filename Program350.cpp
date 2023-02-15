// Specific Programming

#include<iostream>
using namespace std;

int Addition(int i, int j)
{
    int iAns = 0;
    iAns = i + j;

    return iAns;
}

int main()
{
    int a = 11, b = 10, iRet = 0;

    iRet = Addition(a,b);

    cout<<"Addition is : "<<iRet<<"\n";

    return 0;
}