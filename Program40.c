#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt = 0;

    printf("____________________________________\n");
    iCnt = iNo;
    while(iCnt >=1)
    {
        printf("%d\t",iCnt);  
        iCnt--;
    }
    printf("\n____________________________________\n");

}

int main()
{
    int iValue = 0;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0 ;
}
