#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Insert(PPNODE Root, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->lchild = NULL;
    newn->rchild = NULL;

    PNODE temp = *Root;

    if(*Root == NULL)
    {
        *Root = newn;
    }
    else
    {
        while(1)
        {
            if(iNo > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(iNo < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
            else if(iNo == temp->data)
            {
                free(newn);
                printf("Duplicate element not allowed.\n");
                break;               
            }
        }    
    }
}

int main()
{
    PNODE Head = NULL;

    Insert(&Head,11);
    Insert(&Head,7);
    Insert(&Head,21);

    return 0;
}