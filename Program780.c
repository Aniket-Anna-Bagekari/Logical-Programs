#include<stdio.h>

int Strlen(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        str++;
        iCnt++;
        Strlen(str);
    }

    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;
    char sArr[50];

    printf("Enter a string : \n");
    scanf("%[^'\n']s",&sArr);

    iRet = Strlen(sArr);

    printf("Length of string is %d\n",iRet);

    return 0;
}