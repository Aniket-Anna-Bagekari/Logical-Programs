// Assignment 26_2

#include<stdio.h>

void struprX(char *str)
{
    int iCnt = 0;

    for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        if((str[iCnt] >= 'a') && (str[iCnt] <= 'z'))
        {
            str[iCnt] = str[iCnt] - 32;
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

    struprX(arr);

    return 0;
}
