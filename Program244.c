#include<stdio.h>
#include<stdbool.h>

int SumDigitsR(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        SumDigitsR(iNo);  // Recursive Call
    }
    return iSum;
}

int main()
{
    int iValue = 0; 
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = SumDigitsR(iValue);
    printf("Summation of Digits are : %d\n",iRet);

    return 0;
}