// Assignment 26_4

#include<stdio.h>

void DisplayDigit(char *str)
{
    int iCnt = 0;

    for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        if((str[iCnt] >= '0') && (str[iCnt] <= '9'))
        {
            printf("%c",(str[iCnt]));
        }
    }
    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}
