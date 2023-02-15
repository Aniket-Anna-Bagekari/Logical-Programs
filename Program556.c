#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dRetX = 0.0;

    dRetX = ((fTemp - 32) * 5/9);

    return dRetX;    
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit :\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius is %lf\n",dRet);

    return 0;
}
