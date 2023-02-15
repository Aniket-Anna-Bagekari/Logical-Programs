#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'A') || (*str == 'e') || (*str == 'E') || (*str == 'i') || (*str == 'I') || 
        (*str == 'o') || (*str == 'O') || (*str == 'u') || (*str == 'U'))
        {
            break;
        }
        str++;
    }

    if(*str != '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}
