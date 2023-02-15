#include<stdio.h>

// O(N/2)
void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("Factors are : \n");
    //    1         2           3
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)    // Time Complexcity [iNo/2]
    {
        if((iNo % iCnt == 0)) // 4
        {
            printf("%d\n",iCnt); 
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    
    return 0;
}
