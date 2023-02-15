#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iDigit = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            iDigit++;
        }
    }
    return iDigit;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0, iValue = 0;
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

    printf("Enter element to findout the frequency :\n");
    scanf("%d",&iValue);

    iRet = Frequency(p,iLength,iValue);
    printf("Frequency of %d is %d\n",iValue,iRet);

    free(p);

    return 0;
}