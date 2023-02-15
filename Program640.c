#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;
    for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        if(str[iCnt] == ch)
        {
            break;
        }
    }
    if(str[iCnt] == '\0')
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}
int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    
    printf("Enter the character\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr,cValue);
    printf("Character is  at location %d\n",iRet);

    return 0;
}
