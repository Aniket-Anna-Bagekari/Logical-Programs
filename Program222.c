#include<stdio.h>
#include<stdbool.h>

// Toggle 4th Bit

typedef unsigned int UINT;

//  0000    0000    0000    0000    0000    0000    0000    0000

//  0000    0000    0000    0000    0000    0000    0000    1000

//  0       0       0       0       0       0       0       8

// 0x00000008

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000008;
    UINT iAns = 0;

    iAns = iNo ^ iMask;

    return iAns;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updated number is : %d\n",iRet);

    return 0;
}