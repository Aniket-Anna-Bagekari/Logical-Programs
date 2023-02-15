#include<stdio.h>

// OFF 7th Bit

typedef unsigned int UINT;

//  1111    1111    1111    1111    1111    1111    1011    1111
//  F       F       F       F       F       F       B       F

UINT OFFBit(UINT iNo)
{
    UINT iMask = 0xFFFFFFBF;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = OFFBit(iValue);

    printf("Updated number is : %d\n",iRet);

    return 0;
}