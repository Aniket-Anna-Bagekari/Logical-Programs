#include<stdio.h>

void Display()
{
    static char cValue = 'A';
    static int iCnt = 1;

    if(iCnt <= 6)
    {
        printf("%c\t",cValue);
        cValue++;
        iCnt++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}