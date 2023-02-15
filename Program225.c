#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0x00000001;  // UINT iMask = 1;
    UINT iMask2 = 0x00000001;  // UINT iMask = 1;

    UINT iMask = 0;

    UINT iResult = 0;

    if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
    {
        printf("Invalid Position, it should be between 1 to 32\n");
        return false;
    }

    iMask1 = iMask1 << (iPos1 - 1);  // Dynamic Mask Formation
    iMask2 = iMask2 << (iPos2 - 1);  // Dynamic Mask Formation

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
    UINT iPosition1 = 0, iPosition2 = 0;
    bool bRet = false;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    printf("Enter the position1 of Bit : \n");
    scanf("%d",&iPosition1);

    printf("Enter the position2 of Bit : \n");
    scanf("%d",&iPosition2);

    bRet = CheckBit(iValue,iPosition1,iPosition2);
    if(bRet == true)
    {
        printf("Bit at the position %d and %d is ON\n",iPosition1,iPosition2);
    }
    else
    {
        printf("Bit at the position %d and %d is OFF\n",iPosition1,iPosition2);
    }

    return 0;
}

/*
iPos1 = 3
iPos2 = 6

iMask1 =    0   0   0   0   0   0   0   1;
iMask1 =    0   0   0   0   0   0   0   1;

iMask1 = iMask1 << (iPos1 - 1);
iMask1 = iMask1 << (2);
iMask1 =    0   0   0   0   0   1   0   0;

iMask2 = iMask2 << (iPos2 - 1);
iMask2 = iMask2 << (5);
iMask2 =    0   0   1   0   0   0   0   0;

iMask = iMask1 | iMask2;

iMask1 =     0   0   0   0   0   1   0   0 
iMask2 =  |  0   0   1   0   0   0   0   0
-------------------------------------------
             0   0   1   0   0   1   0   0
*/