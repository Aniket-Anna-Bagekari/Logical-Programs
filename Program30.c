#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    //    1         2            3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt; // 4
    }
    
    return iFact;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is : %d\n",iValue,iRet);

    return 0;
}
