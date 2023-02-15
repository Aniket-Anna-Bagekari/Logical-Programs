// Input    4
// Output   4 * 3 * 2 * 1 = 24

#include<stdio.h>

int FactorialR(int iNo)
{
    static int iSum = 1;
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        iSum = iSum * iCnt;
        iCnt++;
        FactorialR(iNo);  // Recursive Call
    }
    return iSum;
}

int main()
{
    int iValue = 0; 
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = FactorialR(iValue);
    printf("Factorial is : %d\n",iRet);

    return 0;
}