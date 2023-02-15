#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iCnt = 1;
    while(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factrial of number is %d\n",iRet);

    return 0;
}
