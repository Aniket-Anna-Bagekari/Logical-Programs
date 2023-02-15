#include<stdio.h>

int MaxDigit(int iNo)
{   
    int iDigit = 0; 
    static int iMax = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
        MaxDigit(iNo);
    }

    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = MaxDigit(iValue);

    printf("Maximum digit in %d is %d\n",iValue,iRet);

    return 0;
}