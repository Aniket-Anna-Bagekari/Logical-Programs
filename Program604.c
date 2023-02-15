#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int iCnt = 0, iCntX = 0;
    char ch1 = 'A', ch2 = 'a';

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        ch1 = 'A', ch2 = 'a';
        for(iCntX = 1; iCntX <= iCol; iCntX++, ch1++, ch2++)
        {
            if((iCnt % 2) == 0)
            {
                printf("%c\t",ch2);
            }
            else
            {
                printf("%c\t",ch1);
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
