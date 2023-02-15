#include<stdio.h>

void FactorsI(int iNo)
{
    int iCnt = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0; 

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    FactorsI(iValue);

    return 0;
}