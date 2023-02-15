#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
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
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL \n");
}

int SearchFirstOccurence(PNODE First, int iNo)
{
    int iCount = 1;
    int iPos = -1;

    while(First != NULL)
    {
        if(First->data == iNo)
        {
            iPos = iCount;
            break;
        }
        First = First->next;
        iCount++;
    }

    return iPos;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,151);
    InsertFirst(&Head,101);
    InsertFirst(&Head,121);
    InsertFirst(&Head,111);
    InsertFirst(&Head,101);
    InsertFirst(&Head,51);
    InsertFirst(&Head,101);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
        
    Display(Head);

    iRet = SearchFirstOccurence(Head,101);
    if(iRet == -1)
    {
        printf("There is no such element in the Linked list\n");
    }
    else
    {
        printf("First Occurence of number is at index %d\n",iRet);
    }

    return 0;
}
