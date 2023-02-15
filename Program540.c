#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = -iNo;
    while(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
