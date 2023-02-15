#include<stdio.h>

int Factorial(int iNo)
{
    static int iCnt = 1;
    static int iFact = 1;

    if(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
        Factorial(iNo);
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is %d\n",iValue,iRet);

    return 0;
}