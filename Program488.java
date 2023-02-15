import java.util.*;

class Student
{
    public String SName;
    public int Marks;
    public int Rollno;

    public Student(String str, int iNo)
    {
        this.SName = str;
        this.Marks = iNo;
    }

    public void Display()
    {
        System.out.println("Name : "+SName+" Marks : "+Marks);
    }
}

class Program488
{
    public static void main(String Arg[])
    {
        Student obj1 = new Student("Karthik",80);
        Student obj2 = new Student("Rutuja",91);

        obj1.Display();
        obj2.Display();
    }
}