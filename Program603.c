#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, iCntX = 0;
    char ch = 'A';

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        ch = 'A';
        for(iCntX = 1; iCntX <= iCol; iCntX++, ch++)
        {
            printf("%c\t",ch);
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
