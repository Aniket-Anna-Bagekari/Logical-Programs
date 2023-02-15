#include<stdio.h>              

int SumDigits(int iNo)
{
    int iSum = 0;

    if(iNo < 0)     // Updator
    {
        iNo = -iNo;
    }

    while(iNo != 0)    
    {
        
        iSum = iSum + (iNo % 10);    // this is also applicable but do this after having experience in Programming
                                     // but dont do this it is confusing
        iNo = iNo / 10;                            
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter a number : \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Summation of digits is : %d\n",iRet);

    return 0;
}
