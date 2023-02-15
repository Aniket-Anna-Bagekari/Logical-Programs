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

void InsertLast(PPNODE First, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));  
    PNODE temp = *First;

    newn->data = iNo;
    newn->next = NULL;

    if(*First == NULL)  // If linked list is empty
    {
        *First = newn;
    }
    else                // If linked list contains atleast one node
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void DisplayR(PNODE First)
{
    if(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First->next;
        DisplayR(First);
    }
}

int CountR(PNODE First)
{
    static int iCnt = 0;

    if(First != NULL)
    {
        iCnt++;
        First = First->next;
        CountR(First);
    }
    
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head,11);
    InsertLast(&Head,21);
    InsertLast(&Head,51);
    InsertLast(&Head,101);

    DisplayR(Head);

    iRet = CountR(Head);
    printf("\nNumber of Nodes are : %d\n",iRet);

    return 0;
}
