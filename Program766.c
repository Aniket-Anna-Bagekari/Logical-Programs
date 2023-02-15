#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 0x00000001, iMask2 = 0x00000001, iMask = 0;
    UINT iResult = 0;

    if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
    {
        printf("Invalid position, should be between 1 to 32\n");
        return false;
    } 

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iMask = iMask1 | iMask2;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    int iPosition1 = 0, iPosition2 = 0;
    bool bRet = false;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    printf("Enter position 1 : \n");
    scanf("%d",&iPosition1);

    printf("Enter position 2 : \n");
    scanf("%d",&iPosition2);

    bRet = CheckBit(iValue,iPosition1,iPosition2);

    if(bRet == true)
    {
        printf("Bit at position %d and %d is ON\n",iPosition1,iPosition2);
    }
    else
    {
        printf("Bit at position %d and %d is OFF\n",iPosition1,iPosition2);
    }

    return 0;
}