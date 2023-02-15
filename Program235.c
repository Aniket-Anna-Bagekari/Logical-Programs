// Input    4
// Output   4 + 3 + 2 + 1 = 10

#include<stdio.h>

int AdditionI(int iNo)
{
    int iSum = 0;
    int iCnt = 1;

    while(iCnt <= iNo)
    {
        iSum = iSum + iCnt;
        iCnt++;
    }
    return iSum;
}

int main()
{
    int iValue = 0; 
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = AdditionI(iValue);
    printf("Addition is : %d\n",iRet);

    return 0;
}