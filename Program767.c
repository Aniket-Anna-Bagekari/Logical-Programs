#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask1 = 0xFFFFFFFF, iMask2 = 0xFFFFFFFF, iMask = 0;
    UINT iResult = 0;

    iMask1 = iMask1 << (iStart - 1);
    iMask2 = iMask2 >> (32 - iEnd);

    iMask = iMask1 & iMask2;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    int iStart = 0, iEnd = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    printf("Enter starting range : \n");
    scanf("%d",&iStart);

    printf("Enter ending range : \n");
    scanf("%d",&iEnd);

    iRet = ToggleBitRange(iValue,iStart,iEnd);

    printf("Updated number is %d\n",iRet);

    return 0;
}