#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int CreateFile(char Name[])
{
    int fd = 0;

    fd = creat(Name,0777);

    return fd;
}

int main()
{
    char FName[50];
    int fd = 0;

    printf("Enter the file name that you want to Create : \n");
    scanf("%s",FName);

    fd = CreateFile(FName);

    if(fd == -1)
    {
        printf("Unable to Create File.\n");
    }
    else
    {
        printf("File is successfully created with fd %d.\n",fd);
    }

    return 0;
}