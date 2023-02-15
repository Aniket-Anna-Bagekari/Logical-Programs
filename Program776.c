#include<stdio.h>

void Display(int iNo)
{
    static char cValue = 'A';
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("%c\t",cValue);
        cValue++;
        iCnt++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}