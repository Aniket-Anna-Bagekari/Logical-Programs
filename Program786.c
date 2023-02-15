#include<stdio.h>

int MinDigit(int iNo)
{   
    int iDigit = 0; 
    static int iMin = 9;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        MinDigit(iNo);
    }

    return iMin;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = MinDigit(iValue);

    printf("Minimum digit in %d is %d\n",iValue,iRet);

    return 0;
}