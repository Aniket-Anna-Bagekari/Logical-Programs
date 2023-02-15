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
    public Node Head;
    public int Count;

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
}

class Program470
{
    public static void main(String Arg[])
    {
        SinglyLL obj = new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
    }
}