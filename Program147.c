#include<stdio.h>

char ToUpperX(char ch)     ///// Refer next program for this question /////
{
    return ch - 32;
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    cRet = ToUpperX(cValue);

    printf("Character in the uppercae is : %c\n",cRet);

    return 0;
}