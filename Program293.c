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
    Length = read(fd,Data,13);

    printf("Data from file is\n");
    write(1,Data,Length);

    return 0;
}

// 0    Standard Input Device       Keyboard
// 1    Standard Output Device      Console
// 2    Standard Error device       Console