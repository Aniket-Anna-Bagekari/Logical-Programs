#include<stdio.h>
#include<stdbool.h>

// 7th, 8th, 9th Bit

typedef unsigned int UINT;

//  0000    0000    0000    0000    0000    0000    0000    0000

//  0000    0000    0000    0000    0000    0001    1100    0000

//     0       0       0       0       0       1       C       0

//  000001C0

//  0x000001C0

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x000001C0;
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
    UINT iValue = 0;
    bool bRet = false;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        printf("7th, 8th, 9th Bit is ON\n");
    }
    else
    {
        printf("7th, 8th, 9th Bit is OFF\n");
    }

    return 0;
}