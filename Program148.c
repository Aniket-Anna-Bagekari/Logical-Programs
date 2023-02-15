#include<stdio.h>

char ToUpperX(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return ch - 32;    
    }
    else
    {
        return ch;
    }
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