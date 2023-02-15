#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, iCntX = 0, iA = 1;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(iCntX = 1; iCntX <= iCol; iCntX++, iA++)
        {
            if(iA <= 9)
            {
                printf("%d\t",iA);
            }
            else
            {
                iA = 1;
                printf("%d\t",iA);
            }
        }
        printf("\n");
    }
}    

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of columns : ");
    scanf("%d",&iValue2);
    
    Pattern(iValue1,iValue2);

    return 0;
}
