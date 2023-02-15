#include<stdio.h>

int OddFactorial(int iNo)
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
        if((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
        iCnt++;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n",iRet);

    return 0;
}
