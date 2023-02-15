#include<stdio.h>              

int CountDigits(int iNo)
{
    // int iDigit = 0;    // Not Required
    int iCnt = 0;

    if(iNo == 0)       // Filter
    {
        return 1;
    }

    if(iNo < 0)
    {
        iNo = -iNo;    // Updator
    }

    while(iNo > 0)    
    {
        // iDigit = iNo % 10;    // Not Required
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter a number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}
