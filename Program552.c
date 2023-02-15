#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    int iFactX = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iCnt = 1;
    while(iCnt <= iNo)
    {
        if((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
        iCnt++;
    }

    iCnt = 1;
    while(iCnt <= iNo)
    {
        if((iCnt % 2) != 0)
        {
            iFactX = iFactX * iCnt;
        }
        iCnt++;
    }

    return iFact - iFactX;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n",iRet);

    return 0;
}
