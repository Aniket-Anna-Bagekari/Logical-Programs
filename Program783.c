#include<stdio.h>

int WhiteSpace(char str[])
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
        WhiteSpace(str);
    }

    return iCnt;
}

int main()
{
    int iRet = 0;
    char sArr[50];

    printf("Enter a string : \n");
    scanf("%[^'\n']s",&sArr);

    iRet = WhiteSpace(sArr);

    printf("Number of WhiteSpaces are %d\n",iRet);

    return 0;
}