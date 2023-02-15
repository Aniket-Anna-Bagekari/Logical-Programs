// Assignment 26_1

#include<stdio.h>

void strlwrX(char *str)
{
    int iCnt = 0;

    for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        if((str[iCnt] >= 'A') && (str[iCnt] <= 'Z'))
        {
            str[iCnt] = str[iCnt] + 32;
            printf("%c",(str[iCnt]));
        }
        else
        {
            printf("%c",str[iCnt]);
        }
    }
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    strlwrX(arr);

    return 0;
}
