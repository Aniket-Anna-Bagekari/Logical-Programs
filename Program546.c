#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iCnt = 1;
    while(iCnt <= 10)
    {
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
        iCnt++;
    }    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}
