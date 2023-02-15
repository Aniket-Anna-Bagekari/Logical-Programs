#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT Start, UINT End)
{
    UINT iMask1 = 0xFFFFFFFF, iMask2 = 0xFFFFFFFF, iMask = 0, iResult = 0;

    iMask1 = iMask1 << (Start - 1);
    iMask2 = iMask2 >> (32 - End);
    iMask = iMask1 & iMask2;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT i = 0, j = 0;
    UINT iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    printf("Enter starting Bit position : \n");
    scanf("%d",&i);

    printf("Enter ending Bit position : \n");
    scanf("%d",&j);

    iRet = ToggleBit(iValue,i,j);
    printf("Updated number is : %d\n",iRet);

    return 0;
}