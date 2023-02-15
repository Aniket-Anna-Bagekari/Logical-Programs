#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
    }
    
    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("#\t");
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
