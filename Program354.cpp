#include<iostream>
using namespace std;

int main()
{
    int iNo1 = 0, iNo2 = 0, iAns = 0;

    cout<<"Enter first number : \n";    // printf("Enter first number : \n");
    cin>>iNo1;                          // scanf("%d",&iNo1);

    cout<<"Enter second number : \n";   // printf("Enter first number : \n");
    cin>>iNo2;                          // scanf("%d",&iNo1);

    iAns = iNo1 + iNo2;

    cout<<"Addition is : "<<iAns<<"\n"; // printf("Addition is : %d",iAns);

    return 0;
}