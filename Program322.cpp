#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class Stack
{
    public:
        struct node *First;
        int iCount;

        Stack();

        bool IsStackEmpty();
        void Push(int No);    // Insert
        int Pop();            // Delete 
        void Display();
};

Stack :: Stack()
{
    First = NULL;
    iCount = 0;
}

bool Stack :: IsStackEmpty()
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

void Stack :: Push(int No)  // InsertFirst
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
        newn->next = First;
        First = newn;
    }

    iCount++;

    cout<<No<<" gets Pushed in the Stack succesfully"<<"\n";
}

int Stack :: Pop()  // DeleteLast
{
    if(First == NULL)
    {
        cout<<"Unable to Pop the element as Stack is Empty."<<"\n";
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

void Stack :: Display()
{
    if(First == NULL)
    {
        cout<<"Stack is empty."<<"\n";
    }
    else
    {
        cout<<"Elements of Stack are : "<<"\n";

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
    Stack obj;

    obj.Push(11);
    obj.Push(21);    
    obj.Push(51);
    obj.Push(101);

    obj.Display();

    int iRet = obj.Pop();
    cout<<"Poped element is "<<iRet<<"\n";

    iRet = obj.Pop();
    cout<<"Poped element is "<<iRet<<"\n";

    obj.Display();

    return 0;
}