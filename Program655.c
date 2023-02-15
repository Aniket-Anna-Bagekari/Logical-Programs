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

int DigitsProduct(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iDigit = 1;
        }

        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }

    return iMult;
}

void DisplayProduct(PNODE First)
{
    int iRet = 0;

    while(First != NULL)
    {
        iRet = DigitsProduct(First->data);
        printf("Product of digits of %d is %d\n",First->data,iRet);

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

    DisplayProduct(Head);

    return 0;
}
