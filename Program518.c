#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 1;

    if(iNo <= 0)
    {
        return;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",2 * (iCnt));
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
