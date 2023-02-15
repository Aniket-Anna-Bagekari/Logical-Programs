#include<stdio.h>

int main()
{
    int iNo1 = 0, iNo2 = 0;
    int iMult = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iNo1);

    printf("Enter Second Number : \n");
    scanf("%d",&iNo2);

    iMult = iNo1 * iNo2;     // Business Logic

    printf("\nMultiplication is : %d\n",iMult);

    return 0;
}