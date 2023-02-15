#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

int main()
{
    char FName1[100], FName2[100];
    int fd = 0, Length = 0;
    char Data[100];

    printf("Enter the file name to open : \n");
    scanf("%s",FName1);

    printf("Enter a string that you want to add in the file : \n");
    scanf("%s",FName2);

    fd = open(FName1,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    Length = strlen(FName2);

    write(fd,FName2,Length);

    printf("Data entered successfully.\n");

    return 0;
}