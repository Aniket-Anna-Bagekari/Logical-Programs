#include<stdio.h>
#include<stdbool.h>

int CountDigitsR(int iNo)
{
    static int iCnt = 0;

    if(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
        CountDigitsR(iNo);  // Recursive Call
    }
    return iCnt;
}

int main()
{
    int iValue = 0; 
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = CountDigitsR(iValue);
    printf("Number of Digits are : %d\n",iRet);

    return 0;
}