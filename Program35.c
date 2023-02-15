#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iSum  = 0;
    int iCnt = 0;
    //    1         2                3
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)  // 4
        {
            iSum = iSum + iCnt;
        }      
    }

    if(iSum == iNo)
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

    printf("Enter a number : \n");
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
