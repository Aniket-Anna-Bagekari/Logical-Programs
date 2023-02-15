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

int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }

    return iRev;
}

void CheckPalindrome(PNODE First)
{
    int iRet = 0;

    while(First != NULL)
    {
        iRet = Reverse(First->data);
        if((First->data) == iRet)
        {
            printf("%d is Palindrome\n",First->data);
        }
        else
        {
            printf("%d is not a Palindrome\n",First->data);
        }
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

    CheckPalindrome(Head);

    return 0;
}
