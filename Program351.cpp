#include<iostream>
using namespace std;

double Addition(double i, double j)
{
    double dAns = 0;
    dAns = i + j;

    return dAns;
}

int main()
{
    double a = 11.9, b = 10.1, dRet = 0.0;

    dRet = Addition(a,b);

    cout<<"Addition is : "<<dRet<<"\n";

    return 0;
}