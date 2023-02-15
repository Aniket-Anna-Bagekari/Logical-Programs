// Input    4
// Output   4 + 3 + 2 + 1 = 10

#include<stdio.h>

int AdditionR(int iNo)
{
    static int iSum = 0;
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        iSum = iSum + iCnt;
        iCnt++;
        AdditionR(iNo);  // Recursive Call
    }
    return iSum;
}

int main()
{
    int iValue = 0; 
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = AdditionR(iValue);
    printf("Addition is : %d\n",iRet);

    return 0;
}