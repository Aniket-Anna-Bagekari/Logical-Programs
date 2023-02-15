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

int SearchLastOccurence(PNODE First, int iNo)
{
    int iCount = 1;
    int iPos = -1;

    while(First != NULL)
    {
        if(First->data == iNo)
        {
            iPos = iCount;
        }
        First = First->next;
        iCount++;
    }

    return iPos;
}

int Frequency(PNODE First, int iNo)
{
    int iCount = 0;

    while(First != NULL)
    {
        if(First->data == iNo)
        {
            iCount++;
        }
        First = First->next;
    }

    return iCount;
}

int MiddleElement(PNODE First)
{
    PNODE Teacher = First;
    PNODE Student = First;

    while(Teacher->next != NULL)  // For Odd number of nodes
    {
        Teacher = Teacher->next->next;
        Student = Student->next;
    }

    return (Student->data);
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,151);
    InsertFirst(&Head,121);
    InsertFirst(&Head,111);
    InsertFirst(&Head,101);
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
        
    Display(Head);

    iRet = MiddleElement(Head);

    printf("Middle element of Linked list is %d\n",iRet);

    return 0;
}
