#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char FName[50];
    int fd1 = 0, fd2 = 0, iSize = 0;
    char Data[100];

    printf("Enter the file name to display its Size : \n");
    scanf("%s",FName);

    fd1 = open(FName,O_RDONLY);

    if(fd1 == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((fd2 = read(fd1,Data,sizeof(Data))) != 0)
    {
        iSize = iSize + fd2;
    }

    printf("Size of %s file is %d.\n",FName,iSize);

    return 0;
}