#include<stdio.h>

int SumDigits(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;

        SumDigits(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Summation of Digits is %d\n",iRet);

    return 0;
}