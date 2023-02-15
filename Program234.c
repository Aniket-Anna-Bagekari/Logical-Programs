#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
        DisplayR(iNo);  // Recursive Call
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d",&iValue);
    DisplayR(iValue);
    printf("\nEnd of Main\n");

    return 0;
}