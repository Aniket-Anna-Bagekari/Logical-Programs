#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == 1)
    {
        printf("%d is a even number\n",iValue);
    }
    else
    {
        printf("%d is a odd number\n",iValue);
    }

    return 0;
}
