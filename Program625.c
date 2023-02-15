#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(ch = ch; ch <= 'Z'; ch++)
        {
            printf("%c\t",ch);
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(ch = ch; ch >= 'a'; ch--)
        {
            printf("%c\t",ch);
        }        
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
