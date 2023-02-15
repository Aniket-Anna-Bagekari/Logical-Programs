#include<stdio.h>
#include<stdbool.h>

// 10th Bit

typedef unsigned int UINT;

//
//  0000    0000    0000    0000    0000    0010    0000    0000
//    0       0       0       0       0       2       0       0
//  00000200
//  0x00000200

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x00000200;
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
        printf("10th Bit is ON\n");
    }
    else
    {
        printf("10th Bit is OFF\n");
    }

    return 0;
}