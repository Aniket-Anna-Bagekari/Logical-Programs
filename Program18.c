// Demonstration of Iteration using while loop

#include<stdio.h>

void Display()
{
    register int iCnt = 0;   // register is used if we use a variable frequently [many times] 

    iCnt = 1;  // 1
    while(iCnt <= 5)  // 2
    {
        printf("Jay Ganesh....\n");  // 4
        iCnt++;  // 3
    }
}

int main()
{
    Display();

    return 0;
}
