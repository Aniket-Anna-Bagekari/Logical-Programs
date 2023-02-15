#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int i)
        {
            cout<<"Allocating the memory of resources...."<<"\n";
            iSize = i;
            Arr = new int[iSize]; 
        }

        ~ArrayX()
        {
            cout<<"Deallocating the memory of resources...."<<"\n";
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the elements of array : "<<"\n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];  
            }
        }

        void Display()
        {
            cout<<"Elements of array are : "<<"\n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";  
            }
            cout<<"\n";
        }
};

int main()
{
    int iLength = 0;

    cout<<"Enter the size of array : "<<"\n";
    cin>>iLength;

    ArrayX *obj = new ArrayX(iLength);  // Dynamic

    obj->Accept();
    obj->Display();

    return 0;
}