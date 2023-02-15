#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char FName[50];
    int fd1 = 0, fd2 = 0;
    char Data[100];

    printf("Enter the file name to display contents of that file : \n");
    scanf("%s",FName);

    fd1 = open(FName,O_RDONLY);

    if(fd1 == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((fd2 = read(fd1,Data,sizeof(Data))) != 0)
    {
        write(1,Data,fd2);
    }

    return 0;
}