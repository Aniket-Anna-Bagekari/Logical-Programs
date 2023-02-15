// Assignment 52_1

#include<stdio.h>

typedef unsigned int UINT;

int CountONBits(UINT iNo)
{
    int iCount = 0;

    // Logic
    
    return iCount;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = CountONBits(iValue);

    printf("Number of ON Bits are %d\n",iRet);

    return 0;
}