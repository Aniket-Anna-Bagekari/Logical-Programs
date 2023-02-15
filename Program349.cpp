#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class DoublyCL
{
    public:
        PNODE First;
        PNODE Last;

        DoublyCL();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

/*
Return_value Class_name :: Function_name()
{

}
*/

DoublyCL :: DoublyCL()  // Default Constructor
{
    First = NULL;
    Last = NULL;
}

void DoublyCL :: InsertFirst(int iNo)
{
    PNODE newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))  // LL is Empty
    {
        First = newn;
        Last = newn;
    }
    else  // If LL contains one or more nodes
    {
        newn->next = First;
        (First)->prev = newn;
        First = newn;
    }

    (First)->prev = Last;
    (Last)->next = First;
}

void DoublyCL :: InsertLast(int iNo)
{
    PNODE newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))  // LL is Empty
    {
        First = newn;
        Last = newn;
    }
    else  // If LL contains one or more nodes
    {
        (Last)->next = newn;
        newn->prev = Last;
        Last = newn;        
    }

    (First)->prev = Last;
    (Last)->next = First;
}

void DoublyCL :: Display()
{
    PNODE temp = First;

    if((First == NULL) && (Last == NULL))
    {
        cout<<"Linked List is empty"<<"\n";
        return;
    }    

    cout<<"Elements of Linked List are : "<<"\n";
    do
    {
        cout<<"| "<<temp->data<<" |<=>";
        temp = temp->next;
    }while(temp != Last->next);

    cout<<"\n";
}

int DoublyCL :: Count()
{
    PNODE temp = First;
    int iCnt = 0;

    if((First == NULL) && (Last == NULL))
    {
        return iCnt;
    }    

    do
    {
        iCnt++;
        temp = temp->next;
    }while(temp != Last->next);

    return iCnt;
}

void DoublyCL :: DeleteFirst()
{
    if((First == NULL) && (Last == NULL))  // Empty LL
    {
        return;
    }
    else if(First == Last)  // Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else  // More than one node
    {
        First = (First)->next;
        delete (Last)->next;    // OR //    free((*First)->prev);

        (First)->prev = Last;
        (Last)->next = First;
    }
}

void DoublyCL :: DeleteLast()
{
    if((First == NULL) && (Last == NULL))  // Empty LL
    {
        return;
    }
    else if(First == Last)  // Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else  // More than one node
    {
        Last = (Last)->prev;
        delete (First)->prev;    // OR //    free((*Last)->next);

        (First)->prev = (Last);
        (Last)->next = (First);
    }
}

void DoublyCL :: InsertAtPos(int iNo, int iPos)
{
    int iNodeCnt = Count();
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iCnt = 0;

    if((iPos < 0) || (iPos > (iNodeCnt + 1)))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == (iNodeCnt + 1))
    {
        InsertLast(iNo);
    }
    else
    {
        newn = new NODE;
        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;
        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;
    }
}

void DoublyCL :: DeleteAtPos(int iPos)
{
    int iNodeCnt = Count();
    PNODE temp = NULL;
    int iCnt = 0;

    if((iPos < 0) || (iPos > (iNodeCnt)))
    {
        cout<<"Invalid Position"<<"\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == (iNodeCnt + 1))
    {
        DeleteLast();
    }
    else
    {
        temp = First;
        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
    }
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    DoublyCL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj.InsertAtPos(105,5);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj.DeleteAtPos(5);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}