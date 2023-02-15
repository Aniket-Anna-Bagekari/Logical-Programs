#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

void Display(char Name[], int fd, int iNo)
{
    char Data[100];
    int iLength = 0;

    while(iLength = read(fd,Data,sizeof(Data)))
    {
        write(1,Data,iNo);
    }
}

int main()
{
    char FName[100];
    int fd = 0, iRet = 0; 
    int iValue = 0;

    printf("Enter the file name to open : \n");
    scanf("%s",FName);

    printf("Enter number of character to read : \n");
    scanf("%d",&iValue);

    fd = open(FName,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    Display(FName,fd,iValue);

    return 0;
}