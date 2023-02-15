#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt = 0;

    printf("____________________________________\n");
    //    1           2         3
    for(iCnt = iNo; iCnt >=1; iCnt--)
    {
        printf("%d\t",iCnt);  // 4
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
