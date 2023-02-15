// Assignment 24_2

#include<stdio.h>

void Display(char ch)
{
    char ch1 = '\0';

    if((ch >= 'A') && (ch <= 'Z'))
    {
        ch1 = ch + 32;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        ch1 = ch - 32;
    }
    else
    {
        printf("%c",ch);
    }
    printf("%c",ch1);
}

int main()
{
    char cValue = '\0';

    printf("Enter a character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
