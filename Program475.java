import java.util.*;

class Node
{
    public int Data;
    public Node Next;

    public Node(int iNo)
    {
        this.Data = iNo;
        this.Next = null;
    }
}

class SinglyLL
{
    private Node Head;
    private int Count;

    public SinglyLL()
    {
        Head = null;
        Count = 0;
    }

    protected void finalize()
    {
        // Memory Free        
    }

    public void InsertFirst(int iNo)
    {
        Node newn = new Node(iNo);

        if(this.Head == null)
        {
            this.Head = newn;
        }
        else
        {
            newn.Next = this.Head;
            this.Head = newn;
        }
        this.Count++;
    }

    public void Display()
    {
        Node temp = Head;

        while(temp != null)
        {
            System.out.print("| "+temp.Data+" |->");
            temp = temp.Next;
        }
        System.out.println("NULL");
    }

    public int CountNodes()
    {
        return this.Count;
    }

    public void InsertLast(int iNo)
    {
        Node newn = new Node(iNo);

        if(this.Head == null)
        {
            this.Head = newn;
        }
        else
        {
            Node temp = Head;

            while(temp.Next != null)
            {
                temp = temp.Next;
            }            
            temp.Next = newn;
        }
        this.Count++;
    }

    public void DeleteFirst()
    {
        if(this.Count == 0)
        {
            return;
        }
        else if(this.Count == 1)
        {
            this.Head = null;
        }
        else
        {
            Head = Head.Next;
        }
        this.Count--;
    }

    public void DeleteLast()
    {
        if(this.Count == 0)
        {
            return;
        }
        else if(this.Count == 1)
        {
            this.Head = null;
        }
        else
        {
            Node temp = Head;

            while(temp.Next.Next != null)
            {
                temp = temp.Next;
            }
            temp.Next = null;
        }
        this.Count--;
    }

    public void InsertAtPos(int iNo, int iPos)
    {
        if((iPos < 1) || (iPos > (Count + 1)))
        {
            System.out.println("Invalid Position");
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(iNo);
        }
        else if(iPos == (Count + 1))
        {
            InsertLast(iNo);
        }
        else
        {
            Node newn = new Node(iNo);
            Node temp = Head;

            for(int iCnt = 1; iCnt < (iPos - 1); iCnt++)
            {
                temp = temp.Next;
            }
            newn.Next = temp.Next;
            temp.Next = newn;

            Count++;
        }
    }

    public void DeleteAtPos(int iPos)
    {
        if((iPos < 1) || (iPos > (Count + 1)))
        {
            System.out.println("Invalid Position");
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == (Count + 1))
        {
            DeleteLast();
        }
        else
        {
            Node temp = Head;

            for(int iCnt = 1; iCnt < (iPos - 1); iCnt++)
            {
                temp = temp.Next;
            }
            temp.Next = temp.Next.Next;

            Count--;
        }
    }
}

class Program475
{
    public static void main(String Arg[])
    {
        SinglyLL obj = new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);
        obj.InsertLast(151);

        obj.InsertAtPos(55,4);

        obj.Display();

        int iRet = obj.CountNodes();

        System.out.println("Number of nodes are : "+iRet);
    }
}