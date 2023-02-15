#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OFFBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x00000001;
    UINT iResult = 0;
    iMask = iMask << (iPos - 1);

    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iPosition = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    printf("Enter the position : \n");
    scanf("%d",&iPosition);

    iRet = OFFBit(iValue,iPosition);

    printf("Updated number is : %d\n",iRet);

    return 0;
}