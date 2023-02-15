#include<stdio.h>

int Count(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'a')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Please enter character\n");
    scanf("%[^'\n']s",Arr);

    iRet = Count(Arr);

    printf("Frequency of a is : %d\n",iRet);

    return 0;
}