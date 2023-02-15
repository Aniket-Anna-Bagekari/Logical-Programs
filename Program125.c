#include<stdio.h>

int main()
{
    int i = 0;

    printf("____________________________________________________________\n");
    printf("ASCII Table");
    printf("____________________________________________________________\n");

    printf("Character \t Decimal \t Hex \t Octal");

    for(i = 0; i <= 127; i++)
    {
        printf("%c \t\t %d \t\t %x \t\t %o \t\t\n",i,i,i,i);
    }

    printf("____________________________________________________________\n");

    return 0;
}