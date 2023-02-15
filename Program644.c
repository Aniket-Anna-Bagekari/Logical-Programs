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

int SearchLastOccurence(PNODE First, int iNo)
{
    int iCnt = 0, iTemp = 0;

    while(First != NULL)
    {
        iCnt++;

        if((First->data) == iNo)
        {
            iTemp = iCnt;
        }
        First = First->next;
    }

    return iTemp;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0, iValue = 0;

    InsertFirst(&Head,101);
    InsertFirst(&Head,51);
    InsertFirst(&Head,11);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    printf("Enter the no to find the last occurence : \n");
    scanf("%d",&iValue);

    iRet = SearchLastOccurence(Head,iValue); 
    if(iRet == false)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Last Occurence of element %d is at %d position\n",iValue,iRet);
    }

    return 0;
}