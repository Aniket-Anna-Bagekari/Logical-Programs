#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    iCnt = 1;
    while(iCnt <= 5)
    {
        iMult = iCnt * iNo;
        printf("%d\t",iMult);    
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
