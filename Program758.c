#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo, int iPos)
{
    UINT iMask = 0x00000001;
    UINT iResult = 0;

    if((iPos < 1) || (iPos > 32))
    {
        printf("Invalid Position, should be between 1 to 32\n");
        return false;
    }

    iMask = iMask << (iPos - 1);

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
    int iPosition = 0;
    bool bRet = false;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    printf("Enter a Position : \n");
    scanf("%d",&iPosition);

    bRet = CheckBit(iValue,iPosition);

    if(bRet == true)
    {
        printf("Bit at position %d is ON\n",iPosition);
    }
    else
    {
        printf("Bit at position %d is OFF\n",iPosition);        
    }
}