#include<stdio.h>
#include<stdbool.h>

// 12th Bit

typedef unsigned int UINT;

//  0000    0000    0000    0000    0000    0000    0000    0000

//  0000    0000    0000    0000    0000    1000    0000    0000

//    0       0       0       0       0     8         0       0

//  00000800

//  0x00000800

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x00000800;
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
        printf("12th Bit is ON\n");
    }
    else
    {
        printf("12th Bit is OFF\n");
    }

    return 0;
}