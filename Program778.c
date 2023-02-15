#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 1)
    {
        return;
    }
    printf("%d\t",iNo);
    printf("*\t");
    Display(iNo - 1);
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}