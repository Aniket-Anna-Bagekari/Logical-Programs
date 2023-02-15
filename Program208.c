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

    if(*First == NULL)  // If linked list is empty
    {
        *First = newn;
    }
    else                // If linked list contains atleast one node
    {
        newn->next = *First;
        *First = newn;   
    }
}

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

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First->next;
    }
    printf("NULL \n");
}

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    
    return iCnt;
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL)  // A
    {
        return;
    }
    else if((*First)->next == NULL)  // B
    {
        free(*First);
        *First = NULL;
    }
    else  // C
    {
        *First = (*First)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL)  // Empty LL
    {
        return;
    }
    else if((*First)->next == NULL)  // 1 Node in LL
    {
        free(*First);
        *First = NULL;
    }
    else  // More than 1 Node in LL
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE First, int iNo, int iPos)
{
    int NodeCnt = 0, iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    NodeCnt = Count(*First);

    if((iPos < 1) || (iPos > (NodeCnt + 1)))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First,iNo);
    }
    else if(iPos == NodeCnt + 1)
    {
        InsertLast(First,iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;

        temp = *First;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE First, int iPos)
{
    PNODE temp1 = NULL, temp2 = NULL;
    int iCnt = 0, NodeCnt = 0;

    NodeCnt = Count(*First);

    if((iPos < 1) || (iPos > NodeCnt))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(First);
    }
    else if(iPos == NodeCnt)
    {
        DeleteLast(First);
    }
    else
    {
        temp1 = *First;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp1 = temp1->next;
        }

        temp2 = temp1->next;

        temp1->next = temp2->next;
        free(temp2);
    }
}

int main()
{
    PNODE Head = NULL;
    int iChoice = 0, iPos = 0, iRet = 0, iNo = 0;

    printf("Welcome to Data Structure Application written by Aniket Anna Bagekari\n");

    while(1)
    {
        printf("----------------------------------------------------------\n");

        printf("Please select the desired option\n");
        printf("1 : Insert new Node at first position\n");
        printf("2 : Insert new Node at last position\n");
        printf("3 : Insert new Node at given position\n");
        printf("4 : Delete Node from first position\n");
        printf("5 : Delete Node from last position\n");
        printf("6 : Delete Node from given position\n");
        printf("7 : Display the contents of Linked List\n");
        printf("8 : Count number of Nodes from Linked List\n");
        
        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1:
                printf("Enter the data that you want to Insert : \n");
                scanf("%d",&iNo);

                InsertFirst(&Head,iNo);
                break;

            case 2:
                printf("Enter the data that you want to Insert : \n");
                scanf("%d",&iNo);

                InsertLast(&Head,iNo);
                break;

            case 3:
                printf("Enter the data that you want to Insert : \n");
                scanf("%d",&iNo);

                printf("Enter the position : \n");
                scanf("%d",&iPos);

                InsertAtPos(&Head,iNo,iPos);
                break;

            case 4:
                DeleteFirst(&Head);
                break;

            case 5:
                DeleteLast(&Head);
                break;

            case 6:
                printf("Enter the position : \n");
                scanf("%d",&iPos);

                DeleteAtPos(&Head,iPos);
                break;

            case 7:
                Display(Head);
                break;

            case 8:
                iRet = Count(Head);
                printf("Number of elements are : %d\n",iRet);
                break;

            case 9:
                printf("Thank you for using the Application\n");
                return 0;

            default:
                printf("Invalid Option\n");
                break;                        
        }
        printf("----------------------------------------------------------\n");
    }

    return 0;
}
