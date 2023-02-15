#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int CountChar(char Name[], int fd, char cValue)
{
    int iLength = 0, i = 0, iCount = 0;
    char Data[100];

    while(iLength = read(fd,Data,sizeof(Data)))
    {
        for(i = 0; i < iLength; i++)
        {
            if(Data[i] == cValue)
            {
                iCount++;
            }
        }
    }
    return iCount;
}

int main()
{
    char FName[100];
    int fd = 0, iRet = 0; 
    char cValue = '\0';

    printf("Enter the file name to open : \n");
    scanf("%s",FName);

    printf("Enter a character to find its occurence : \n");
    scanf(" %c",&cValue);

    fd = open(FName,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    iRet = CountChar(FName,fd,cValue);

    printf("Number of %c in the file are %d.\n",cValue,iRet);
    return 0;
}