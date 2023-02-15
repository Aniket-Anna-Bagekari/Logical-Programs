#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart < 0) || (iEnd < 0))
    {
        printf("Invalid Range\n");
        return;
    }

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
    }

    iCnt = iStart;
    while((iCnt >= iStart) && (iCnt <= iEnd))
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;    
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Addition is %d\n",iRet);

    return 0;
}
