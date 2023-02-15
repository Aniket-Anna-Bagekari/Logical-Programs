#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x00000001;  // UINT iMask = 1;
    UINT iResult = 0;

    if((iPos < 1) || (iPos > 32))
    {
        printf("Invalid Position, it should be between 1 to 32\n");
        return false;
    }

    iMask = iMask << (iPos - 1);  // Dynamic Mask Formation

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
    UINT iPosition = 0;
    bool bRet = false;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    printf("Enter the position of Bit : \n");
    scanf("%d",&iPosition);

    bRet = CheckBit(iValue,iPosition);
    if(bRet == true)
    {
        printf("Bit at the position %d is ON\n",iPosition);
    }
    else
    {
        printf("Bit at the position %d is OFF\n",iPosition);
    }

    return 0;
}