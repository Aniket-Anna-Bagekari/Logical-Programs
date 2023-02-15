import java.util.*;

class Student
{
    public String SName;
    public int Marks;
    public int RollNo;

    public static int Generator;

    static
    {
        Generator = 0;
    }

    public Student(String str, int iNo)
    {
        this.SName = str;
        this.Marks = iNo;
        Generator++;
        this.RollNo = Generator;
    }

    public void Display()
    {
        System.out.println("Roll No : "+RollNo+" Name : "+SName+" Marks : "+Marks);
    }
}

class DBMS
{
    public LinkedList <Student> lobj;

    public DBMS()
    {
        lobj = new LinkedList();
    }

    public void StartDBMS()
    {
        System.out.println("Marvellous Customised DBMS started successfully....");
    }

    // All SQL queries should be implemented here

    // insert into student values(____,____);
    public void Insert(String str, int iNo)
    {
        Student sobj = new Student(str,iNo);
        lobj.add(sobj);
    }
}

class Program494
{
    public static void main(String Arg[])
    {
        DBMS dobj = new DBMS();

        dobj.StartDBMS();

        dobj.Insert("Karthik",90);
        dobj.Insert("Rutuja",96);
        dobj.Insert("Ankit",80);
        dobj.Insert("Pooja",67);
    }
}