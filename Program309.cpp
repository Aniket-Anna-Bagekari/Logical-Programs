#include<iostream>
using namespace std;

template <class T>

void Swap(T &x, T &y)
{
    T temp;

    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int A = 11, B = 10;
    cout<<"Value of A "<<A<<"\n";
    cout<<"Value of B "<<B<<"\n";
    Swap(A,B);
    cout<<"Value of A "<<A<<"\n";
    cout<<"Value of B "<<B<<"\n";

    double P = 11.9, Q = 10.7;
    cout<<"Value of P "<<P<<"\n";
    cout<<"Value of Q "<<Q<<"\n";
    Swap(P,Q);
    cout<<"Value of P "<<P<<"\n";
    cout<<"Value of Q "<<Q<<"\n";

    return 0;
}