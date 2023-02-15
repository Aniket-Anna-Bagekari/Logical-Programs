#include<stdio.h>

// Toggle 7th Bit

typedef unsigned int UINT;

//  0000    0000    0000    0000    0000    0000    0100    0000
//  0       0       0       0       0       0       4       0

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000040;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
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