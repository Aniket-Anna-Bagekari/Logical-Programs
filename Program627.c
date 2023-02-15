#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("Decimal : %d\n",ch);
        printf("Octal : 0%o\n",ch);
        printf("Hexadecimal : 0x%x\n",ch);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("Decimal : %d\n",ch);
        printf("Octal : 0%o\n",ch);
        printf("Hexadecimal : 0x%x\n",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
