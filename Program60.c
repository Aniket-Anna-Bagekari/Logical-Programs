#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit = 0, iRev = 0;
    int iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return (iRev == iTemp);    // This is also Allowed
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
