#include<stdio.h>

double SquareMeter(int iValue)
{
    double dRetX = 0.0;

    dRetX = iValue * 0.0929;

    return dRetX;    
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet :\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf\n",dRet);

    return 0;
}
