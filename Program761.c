#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int iPos)
{
    UINT iMask = 0x00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;
    int iPosition = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    printf("Enter a Position : \n");
    scanf("%d",&iPosition);

    iRet = ToggleBit(iValue,iPosition);

    printf("Updated number is %d",iRet);
}