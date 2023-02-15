#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iSum  = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }      
    }
    return iSum;
}

bool CheckPerfect(int iData)
{
    int iAns = 0;

    iAns = SumFactors(iData);
    if(iAns == iData)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is a Perfect Number\n",iValue);
    }
    else
    {
        printf("%d is not a Perfect Number\n",iValue);
    }

    return 0;
}
