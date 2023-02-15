#include<stdio.h>

int MultDigits(int iNo)
{
    static int iCnt = 1;
    static int iMult = 1;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;

        MultDigits(iNo);
    }

    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of Digits is %d\n",iRet);

    return 0;
}