#include<stdio.h>

int CountONBits(unsigned int iNo)
{
    int iCnt = 0, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        if(iDigit == 1)
        {
            iCnt++;
        }
        iNo = iNo / 2;
    }
    return iCnt;
}

int main()
{
    unsigned int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = CountONBits(iValue);

    printf("Number of Bits which are ON are : %d\n",iRet);

    return 0;
}