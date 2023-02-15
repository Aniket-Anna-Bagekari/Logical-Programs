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
    char FName[20];
    int fd = 0;      // fd = file descriptor

    printf("Enter the file name that you want to create : \n");
    scanf("%s",FName);

    fd = CreateFile(FName);

    if(fd == -1)
    {
        printf("Unable to create file.\n");
    }
    else
    {
        printf("File is successfully created with FD %d.\n",fd);
    }

    return 0;
}