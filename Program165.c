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

void InsertFirst(PPNODE First, int No)
{
    // Logic
}

void Display(PNODE First)
{
    // Logic
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

    return 0;
}


/*
    void InsertFirst(PPNODE First, int No)
    void InsertLast(PPNODE First, int No)
    void InsertAtPos(PPNODE First, int No, int Pos)

    void DeleteFirst(PPNODE First)
    void DeleteLast(PPNODE First)
    void DeleteAtPos(PPNODE First)

    void Display(PNODE First)
    int Count(PNODE First)
*/
//////////////////////////////////////////////////////////////
/*
    InsertFirst(&Head,11)
    InsertLast(&Head,11)
    InsertAtPos(&Head,11,5)

    DeleteFirst(&Head)
    DeleteLast(&Head)
    DeleteAtPos(&Head,5)

    Display(Head)
    Count(Head)
*/


/*
    primitive data types
    size of all data types
    loops(while, for)
    dynamic memory(malloc & calloc)
    pointer and its types
    pointer to pointer
    call by value & call by address
    structure declaration
    self referenctial structure
    memory allocation of structure
    direct and indirect accesing of structure
    typedef and its use
*/
