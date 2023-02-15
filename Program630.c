#include<stdio.h>

int Difference(char *str)
{
    int iCnt = 0, iCntX = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        else if(((*str >= 'A') && (*str <= 'Z')))
        {
            iCntX++;
        }
        str++;  
    }
    return iCnt - iCntX;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);
    printf("%d",iRet);
    return 0;
}
