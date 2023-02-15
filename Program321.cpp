// Template for Stack

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

}

bool Stack :: IsStackEmpty()
{

}

void Stack :: Push(int No)
{

}

int Stack :: Pop()
{

}

void Stack :: Display()
{

}

int main()
{

    return 0;
}