#include<stdio.h>
#include<stdbool.h>

// Check 15th Bit

typedef unsigned int UINT;

//  0000    0000    0000    0000    0100    0000    0000    0000
//  0       0       0       0       4       0       0       0

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x00004000;
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
        printf("15th Bit is ON\n");
    }
    else
    {
        printf("15th Bit is OFF\n");
    }

    return 0;
}