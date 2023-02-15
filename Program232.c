//  *   *   *   *

#include<stdio.h>

void DisplayI()                   // I for Iterative
{
    int iCnt = 1;  // auto

    while(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR()                  // R for Recursive
{
    int iCnt = 1;  // If static is removed it causes uncontrolled recursion

    if(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();  // Recursive Call
    }
}

int main()
{
    DisplayR();

    return 0;
}