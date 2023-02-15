#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char FName[20];
    int fd = 0, Length = 0;
    char Data[100];

    printf("Enter the file name that you want to open : \n");
    scanf("%s",FName);

    fd = open(FName,O_RDWR);
    if(fd == -1)
    {
        return -1;
    }

    // read(kuthun,kashyat,kiti);
    read(fd,Data,13);

    printf("Data from file is %s\n",Data);  // This will print garbage after the data // prefer next program

    return 0;
}