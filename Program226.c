#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//  0000    1111    0000    1111    0000    1111    0000    1111
//  0       F       0       F       0       F       0       F

// 0x0F0F0F0F

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x0F0F0F0F;
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