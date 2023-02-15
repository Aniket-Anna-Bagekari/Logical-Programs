#include<stdio.h>
#include<stdbool.h>

// OFF 4th Bit

typedef unsigned int UINT;

//  0000    0000    0000    0000    0000    0000    0000    0000

//  1111    1111    1111    1111    1111    1111    1111    0111

//  F       F       F       F       F       F       F       7

// 0xFFFFFFF7

UINT OFFBit(UINT iNo)
{
    UINT iMask = 0xFFFFFFF7;
    UINT iAns = 0;

    iAns = iNo & iMask;

    return iAns;
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