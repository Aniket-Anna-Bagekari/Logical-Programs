#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue1)
{
    if(cValue1 == 'a' || cValue1 == 'e' || cValue1 == 'i' || cValue1 == 'o' || cValue1 == 'u' || 
       cValue1 == 'A' || cValue1 == 'E' || cValue1 == 'I' || cValue1 == 'O' || cValue1 == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a character :\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Vowel");
    }
    else
    {
        printf("It is not a Vowel");
    }

    return 0;
}
