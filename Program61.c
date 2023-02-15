#include<stdio.h>
#include<stdbool.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

bool CheckPallindrome(int iData)
{
    int iReverse = 0;
    iReverse = Reverse(iData);

    return (iReverse == iData);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("%d is a Pallindrome Number\n",iValue);
    }
    else
    {
        printf("%d is not a Pallindrome Number\n",iValue);
    }

    return 0;
}