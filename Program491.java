// Template file

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

}

class Program491
{
    public static void main(String Arg[])
    {
        Student obj1 = new Student("Karthik",80);
        Student obj2 = new Student("Rutuja",91);
        Student obj3 = new Student("Ankit",80);

        obj1.Display();
        obj2.Display();
        obj3.Display();
    }
}