#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

//  if write function is not working then add #include<conio.h>  else  #include<unistd.h>  //

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

    printf("Enter the Data that you want to write in the file : \n");
    scanf(" %[^'\n']s",Data);

    Length = strlen(Data);

    // write(kashyat,kay,kiti);
    write(fd,Data,Length);

    return 0;
}