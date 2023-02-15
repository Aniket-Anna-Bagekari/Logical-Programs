#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char FName1[20];
    char FName2[20];

    int fdSource = 0, fdDest = 0, Length = 0;
    char Data[100];

    printf("Enter the file name which contains data : \n");
    scanf("%s",FName1);

    fdSource = open(FName1,O_RDONLY);

    if(fdSource == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    
    printf("Enter the file name that you want to create : \n");
    scanf("%s",FName2);

    fdDest = creat(FName2,0777);

    if(fdDest == -1)
    {
        printf("Unable to create new file\n");
        return -1;
    }

    while((Length = read(fdSource,Data,sizeof(Data))) != 0)
    {
        write(fdDest,Data,Length);
    }

    close(fdSource);
    close(fdDest);

    return 0;
}