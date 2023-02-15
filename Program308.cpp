#include<iostream>
using namespace std;

// Call by Reference
void Swapi(int &x, int &y)
{
    int itemp;

    itemp = x;
    x = y;
    y = itemp;
}

void Swapd(double &x, double &y)
{
    double dtemp;

    dtemp = x;
    x = y;
    y = dtemp;
}

int main()
{
    int A = 11, B = 10;
    cout<<"Value of A "<<A<<"\n";
    cout<<"Value of B "<<B<<"\n";
    Swapi(A,B);
    cout<<"Value of A "<<A<<"\n";
    cout<<"Value of B "<<B<<"\n";

    double P = 11.9, Q = 10.7;
    cout<<"Value of P "<<P<<"\n";
    cout<<"Value of Q "<<Q<<"\n";
    Swapd(P,Q);
    cout<<"Value of P "<<P<<"\n";
    cout<<"Value of Q "<<Q<<"\n";

    return 0;
}