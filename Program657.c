#include<stdio.h>
#include<stdlib.h>

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

int LargestDigit(int iNo)
{
    int iDigit = 0, iMax = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
    }

    return iMax;
}

void DisplayMaximum(PNODE First)
{
    int iRet = 0;

    while(First != NULL)
    {
        iRet = LargestDigit(First->data);
        printf("Largest Digit in %d is %d\n",First->data,iRet);

        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,101);
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    DisplayMaximum(Head);

    return 0;
}
