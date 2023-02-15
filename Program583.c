#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

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

    printf("Enter element to findout the occurence :\n");
    scanf("%d",&iValue);

    bRet = Check(p,iLength,iValue);
    
    if(bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(p);

    return 0;
}