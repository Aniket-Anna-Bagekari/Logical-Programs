#include<iostream>
using namespace std;

// Call by Value
void Swap(int x, int y)
{
    int itemp;

    itemp = x;
    x = y;
    y = itemp;
}

int main()
{
    int A = 11, B = 10;

    cout<<"Value of A "<<A<<"\n";
    cout<<"Value of B "<<B<<"\n";

    Swap(A,B);

    cout<<"Value of A "<<A<<"\n";
    cout<<"Value of B "<<B<<"\n";

    return 0;
}