#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int OpenFile(char Name[])
{
    int fd = 0;

    fd = open(Name,O_RDONLY);

    return fd;
}

int main()
{
    char FName[50];
    int fd = 0;

    printf("Enter the file name that you want to Open : \n");
    scanf("%s",FName);

    fd = OpenFile(FName);

    if(fd == -1)
    {
        printf("Unable to Open File.\n");
    }
    else
    {
        printf("File is successfully opened with fd %d.\n",fd);
    }

    return 0;
}