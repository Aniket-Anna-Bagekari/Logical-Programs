#include<stdio.h>
#include<stdbool.h>

// Check 1st, 32nd Bit

typedef unsigned int UINT;

//  1000    0000    0000    0000    0000    0000    0000    0001
//  8       0       0       0       0       0       0       1

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x80000001;
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
        printf("1st, 32nd Bit is ON\n");
    }
    else
    {
        printf("1st, 32nd Bit is OFF\n");
    }

    return 0;
}