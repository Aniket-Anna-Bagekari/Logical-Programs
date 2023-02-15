// Assignment 26_3

#include<stdio.h>

void strtoggleX(char *str)
{
    int iCnt = 0;

    for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        if((str[iCnt] >= 'a') && (str[iCnt] <= 'z'))
        {
            str[iCnt] = str[iCnt] - 32;
            printf("%c",(str[iCnt]));
        }
        else if((str[iCnt] >= 'A') && (str[iCnt] <= 'Z'))
        {
            str[iCnt] = str[iCnt] + 32;
            printf("%c",(str[iCnt]));
        }
        else if(str[iCnt] == ' ')
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

    strtoggleX(arr);

    return 0;
}
