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
}

class Program472
{
    public static void main(String Arg[])
    {
        SinglyLL obj = new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(101);
        obj.InsertLast(111);

        obj.Display();

        int iRet = obj.CountNodes();

        System.out.println("Number of nodes are : "+iRet);
    }
}