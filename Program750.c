#include<stdio.h>
#include<stdbool.h>

// Check 7th, 15th, 21th, 28th Bit

typedef unsigned int UINT;

//  0000    1000    0001    0000    0100    0000    0100    0000
//  0       8       1       0       4       0       4       0

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x08104040;
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
        printf("7th, 15th, 21th, 28th Bit is ON\n");
    }
    else
    {
        printf("7th, 15th, 21th, 28th Bit is OFF\n");
    }

    return 0;
}