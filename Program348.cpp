#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCL
{
    public:
        PNODE First;
        PNODE Last;

        SinglyCL();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

SinglyCL :: SinglyCL()
{
    First = NULL;
    Last = NULL;
}

void SinglyCL :: InsertFirst(int iNo)
{
    PNODE newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))  // Empty LL
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else  // LL contains atleast one node
    {
        newn->next = First;
        First = newn;
        (Last)->next = First;
    }
}

void SinglyCL :: InsertLast(int iNo)
{
    PNODE newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))  // Empty LL
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else  // LL contains atleast one node
    {
        (Last)->next = newn;
        Last = newn;
        (Last)->next = First;
    }
}

void SinglyCL :: DeleteFirst()
{
    PNODE temp = First;    // Using temp pointer in DeleteFirst

    if((First == NULL) && (Last ==NULL))  // Empty LL
    {
        return;
    }
    else if(First == Last)  // Single node in LL
    {
        delete First;

        First = NULL;
        Last = NULL;
    }
    else  // If LL contains more than 1 node
    {
        First = (First)->next;

        delete temp;

        (Last)->next = First;    
    }
}

void SinglyCL :: DeleteLast()
{
    PNODE temp = First;

    if((First == NULL) && (Last ==NULL))  // Empty LL
    {
        return;
    }
    else if(First == Last)  // Single node in LL
    {
        delete First;

        First = NULL;
        Last = NULL;
    }
    else  // If LL contains more than 1 node
    {
        while(temp->next != (Last))
        {
            temp = temp->next;
        }    

        delete temp->next;

        Last = temp;
        (Last)->next = First;
    }
}

void SinglyCL :: Display()
{
    PNODE temp = First;

    cout<<"Elements of Linked List are : "<<"\n";

    do
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
    }while(temp != Last->next);
    cout<<"\n";
}

int SinglyCL :: Count()
{
    PNODE temp = First;

    int iCnt = 0;
    
    do
    {
        iCnt++;
        temp = temp->next;
    }while(temp != Last->next);
    return iCnt;
}

void SinglyCL :: InsertAtPos(int iNo, int iPos)
{
    int iNodeCnt = 0, iCnt = 0;
    PNODE temp = First;
    PNODE newn = NULL;

    iNodeCnt = Count();

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

        for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void SinglyCL :: DeleteAtPos(int iPos)
{
    int iNodeCnt = 0, iCnt = 0;
    PNODE temp1 = First;
    PNODE temp2 = NULL;

    iNodeCnt = Count();

    if((iPos < 0) || (iPos > (iNodeCnt + 1)))
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
        for(iCnt = 1; iCnt < (iPos- 1); iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;

        temp1->next = temp2->next;
        delete temp2;
    }
}

int main()
{
    SinglyCL obj;

    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.InsertAtPos(105,5);

    obj.Display();

    iRet = obj.Count();
    
    cout<<"Number of elements are : "<<iRet<<"\n";
    obj.DeleteAtPos(5);

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;
}