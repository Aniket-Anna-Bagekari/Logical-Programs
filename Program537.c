#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float fPercent = 0.0;

    fPercent = (iNo2 * 100) / iNo1;

    return fPercent;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks : ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("\nPercentage is : %.2f\n",fRet);

    return 0;
}
