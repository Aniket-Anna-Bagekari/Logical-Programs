#include<stdio.h>

void DisplayBinary(unsigned int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        printf("%d",iDigit);
        iNo = iNo / 2;
    }
    printf("\n");
}

int main()
{
    unsigned int iValue = 11;

    DisplayBinary(iValue);

    return 0;
}