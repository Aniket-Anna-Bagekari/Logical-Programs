#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }    
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please enter two numbers : ");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return 0;
}
