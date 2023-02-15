// Demonstration of Iteration using for loop

#include<stdio.h>

void Display(int iValue)
{
    register int iCnt = 0;    // register is used if we use a variable frequently [many times]

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Jay Ganesh....\n");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the number of Iterations : \n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}
