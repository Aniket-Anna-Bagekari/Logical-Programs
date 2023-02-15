#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class Queue
{
    public:
        struct node *First;
        int iCount;

        Queue();

        bool IsQueueEmpty();
        void EnQueue(int No);    // Insert
        int DeQueue();            // Delete 
        void Display();
};

Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}

bool Queue :: IsQueueEmpty()
{
    if(iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Queue :: EnQueue(int No)  // InsertLast
{
    struct node *newn = new node;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct node *temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }

    iCount++;

    cout<<No<<" gets Added in the Queue succesfully"<<"\n";
}

int Queue :: DeQueue()  // DeleteFirst
{
    if(First == NULL)
    {
        cout<<"Unable to Pop the element as Queue is Empty."<<"\n";
        return -1;
    }
    else
    {
        int Value = First->data;
        struct node *temp = First;

        First = First->next;
        delete temp;

        iCount--;

        return Value;
    }
}

void Queue :: Display()
{
    if(First == NULL)
    {
        cout<<"Queue is empty."<<"\n";
    }
    else
    {
        cout<<"Elements of Queue are : "<<"\n";

        struct node *temp = First;
        while(temp != NULL)
        {
            cout<<"| "<<temp->data<<" |->";
            temp = temp->next;
        }
        cout<<"NULL"<<"\n";
    }
}

int main()
{
    Queue obj;

    obj.EnQueue(11);
    obj.EnQueue(21);    
    obj.EnQueue(51);
    obj.EnQueue(101);

    obj.Display();

    int iRet = obj.DeQueue();
    cout<<"Removed element is "<<iRet<<"\n";

    iRet = obj.DeQueue();
    cout<<"Removed element is "<<iRet<<"\n";

    obj.Display();

    return 0;
}