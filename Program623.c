#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Decimal\t Hexadecimal\t Octal\t Character\t");

    for(iCnt = 0; iCnt <= 127; iCnt++)
    {
        printf("%d\t\t %x\t\t %o\t\t %c\t\t\n",iCnt,iCnt,iCnt,iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}
