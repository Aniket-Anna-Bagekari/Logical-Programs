#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iRetX = 0;

    iRetX = (iNo * 1000);

    return iRetX;    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance :\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is %d\n",iRet);

    return 0;
}
