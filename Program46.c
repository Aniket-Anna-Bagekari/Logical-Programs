// Input : 751
// Output : 3

// Input : 7515
// Output : 4

// Input : 75
// Output : 2

// Input : 2
// Output : 1

#include<stdio.h>                     // Sample code

int CountDigits(int iNo)
{
    return 0;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter a number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}
