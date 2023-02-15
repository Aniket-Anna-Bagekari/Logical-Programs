#include<stdio.h>
#include<stdbool.h>

bool CheckPerfectR(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;

    if(iCnt <= iNo/2)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        CheckPerfectR(iNo);  // Recursive Call
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
    bool bRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfectR(iValue);
    if(bRet == true)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }

    return 0;
}