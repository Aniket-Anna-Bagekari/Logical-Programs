#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iMult = 1;
    int iSum = 0, iSumX = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iNo % 2) == 0)
        {
            iSum = iSum + iDigit;
        }
        if((iNo % 2) != 0)
        {
            iSumX = iSumX + iDigit;
        }    
        iNo = iNo / 10;
    }
    return iSum - iSumX;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d\n",iRet);

    return 0;
}
