#include<stdio.h>

int CountFrequency(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()                              /////  solved error is in program[144.c]
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Please enter character\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the character\n");
    scanf("%c",&cValue);

    iRet = CountFrequency(Arr,cValue);

    printf("Frequency of letter is : %d\n",iRet);

    return 0;
}