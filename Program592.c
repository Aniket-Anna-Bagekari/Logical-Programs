// Assignment 17_5 

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iSize)
{
    
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",iLength);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Summation of digits of each number is :\n");
    
    DigitsSum(p,iLength);

    free(p);

    return 0;
}