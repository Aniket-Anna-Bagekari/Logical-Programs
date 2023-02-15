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

int SearchFirstOccurence(PNODE First, int iNo)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;

        if((First->data) == iNo)
        {
            break;
        }
        First = First->next;
    }

    if(First == NULL)
    {
        return false;
    }

    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0, iValue = 0;

    InsertFirst(&Head,101);
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    printf("Enter the no to find the occurence : \n");
    scanf("%d",&iValue);

    iRet = SearchFirstOccurence(Head,iValue); 
    if(iRet == false)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element %d found at %d position\n",iValue,iRet);
    }

    return 0;
}