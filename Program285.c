#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char FName[20];
    int fd = 0;      // fd = file descriptor

    printf("Enter the file name that you want to create : \n");
    scanf("%s",FName);

    fd = creat(FName,0777);

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