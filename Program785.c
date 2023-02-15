#include<stdio.h>

int CountCap(char *str)
{   
    static int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
        CountCap(str);
    }

    return iCnt;
}

int main()
{
    int iRet = 0;
    char sArr[50];

    printf("Enter a string : \n");
    scanf("%[^'\n']s",&sArr);

    iRet = CountCap(sArr);

    printf("Number of capital characters are %d\n",iRet);

    return 0;
}