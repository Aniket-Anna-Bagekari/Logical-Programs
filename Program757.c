#include<stdio.h>

// ON First 4 Bits

typedef unsigned int UINT;

//  0000    0000    0000    0000    0000    0000    0000    1111
//  0       0       0       0       0       0       0       F

UINT ONBit(UINT iNo)
{
    UINT iMask = 0x0000000F;
    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = ONBit(iValue);

    printf("Updated number is : %d\n",iRet);

    return 0;
}