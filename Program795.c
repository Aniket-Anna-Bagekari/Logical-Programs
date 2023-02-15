#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int CountWhiteSpace(char Name[], int fd)
{
    int iLength = 0, i = 0, iCount = 0;
    char Data[100];

    while(iLength = read(fd,Data,sizeof(Data)))
    {
        for(i = 0; i < iLength; i++)
        {
            if(Data[i] == ' ')
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

    printf("Enter the file name to open : \n");
    scanf("%s",FName);

    fd = open(FName,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    iRet = CountWhiteSpace(FName,fd);

    printf("Number of White Spaces are %d.\n",iRet);
    return 0;
}