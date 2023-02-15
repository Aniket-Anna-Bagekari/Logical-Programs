#include<stdio.h>

int SumFactors(int iNo)
{
    int iSum  = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }      
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);

    printf("Summation of Factors is : %d\n",iRet);
    
    return 0;
}
