#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL \n");
}

int CheckPrime(int iNo)
{
    int iCnt = 0, iTemp = 0;
 
    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iTemp = 1;
            break;
        }
    }

    return iTemp;
}

void DisplayPrime(PNODE First)
{
    int iRet = 0;

    while(First != NULL)
    {
        if(iRet = CheckPrime(First->data) == 0)
        {
            printf("%d is a Prime Number\n",First->data);
        }
        else
        {
            printf("%d is not a Prime Number\n",First->data);
        }
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    
    InsertFirst(&Head,101);
    InsertFirst(&Head,17);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    DisplayPrime(Head); 

    return 0;
}
