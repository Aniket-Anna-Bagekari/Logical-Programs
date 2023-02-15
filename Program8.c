//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Steps to follow Programming :-
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  1  Understand the problem statement
//  2  Write the algorithm
//  3  Decide the Programming Language
//  4  Write the Program
//  5  Test the program     

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Problem Statement : Accept a number from user and Check whether it is divisible by five or not ?
//
//  Input  : 23
//  Output : 23 is not divisible by 5
//
//  Input  : 25
//  Output : 25 is divisible by 5
//
//  Input  : -20
//  Output : -20 is not divisible by 5
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Alogoritm :-
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    START
        Accept number from user as No
        Divide that No by 5 and check the of remainder 
        If the value is = 0
            Then display as No is Divisible by 5
        Otherwise
            display No is not Divisible by 5    
    END    
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DivisibleByFive
//  Description   : To check whether input is divisible by 5 or not
//  Input         : Integer
//  Output        : Integer
//  Author        : Aniket Anna Bagekari (EMP_ID)
//  Date          : 12/10/2022
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int DivisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;

    if(iAns == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Entry point of the application :-
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = DivisibleByFive(iValue);
    if(iRet == 0)
    {
        printf("%d is not divisible by 5\n",iValue);
    }
    else
    {
        printf("%d is divisible by 5\n",iValue);
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Result 
//  Input  : 25
//  Output : 25 is divisible by 5
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
