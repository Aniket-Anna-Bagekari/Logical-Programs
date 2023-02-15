#include<stdio.h>

void Reverse(char *str)
{
    int iCnt = 0, iCntX = 0, i = 0;

    while(str[i] != '\0')
    {
        iCnt++;
        i++;
    }

    for(iCntX = iCnt - 1; iCntX >= 0; iCntX--)
    {
        printf("%c",str[iCntX]);
    }
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}
