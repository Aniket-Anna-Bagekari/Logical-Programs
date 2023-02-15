#include<stdio.h>
#include<stdbool.h>

// Check 5th, 18th Bit

typedef unsigned int UINT;

//  0000    0000    0000    0010    0000    0000    0001    0000
//  0       0       0       2       0       0       1       0

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x00020010;
    UINT iResult = 0;

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
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        printf("5th, 18th Bit is ON\n");
    }
    else
    {
        printf("5th, 18th Bit is OFF\n");
    }

    return 0;
}