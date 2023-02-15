#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iCnt = 10;
    while(iCnt >= 1)
    {
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
        iCnt--;
    }    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}
