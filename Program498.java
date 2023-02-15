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

    // insert into Student values(____,____);
    public void Insert(String str, int iNo)
    {
        Student sobj = new Student(str,iNo);
        lobj.add(sobj);
    }

    // select * from Student;
    public void DisplayAll()
    {
        for(Student sRef : lobj)  // for each loop
        {
            sRef.Display();
        }
    }

    // select * from Student where RollNo = 3;
    public void DisplaySpecific(int iValue)
    {
        for(Student sRef : lobj)
        {
            if(sRef.RollNo == iValue)
            {
                sRef.Display();
                break;
            }
        }
    }

    // select * from Student where Name = 'Rutuja';
    public void DisplaySpecific(String str)
    {
        for(Student sRef : lobj)
        {
            if(str.equals(sRef.SName))
            {
                sRef.Display();
                break;
            }
        }
    }

    // delete from Student where RollNo = 3;
    public void Delete(int iNo)
    {
        int index = 0;

        for(Student sRef : lobj)
        {
            if(sRef.RollNo == iNo)
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }
}

class Program498
{
    public static void main(String Arg[])
    {
        DBMS dobj = new DBMS();

        dobj.StartDBMS();

        dobj.Insert("Karthik",90);
        dobj.Insert("Rutuja",96);
        dobj.Insert("Ankit",80);
        dobj.Insert("Pooja",67);
        dobj.Insert("Ram",91);

        dobj.DisplayAll();

        dobj.DisplaySpecific(3);
        dobj.DisplaySpecific("Rutuja");

        dobj.Delete(3);
        
        dobj.DisplayAll();
    }
}