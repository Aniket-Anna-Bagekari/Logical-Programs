// This will give Logical Error

import java.util.*;

class Student
{
    public String SName;
    public int Marks;
    public static int RollNo;

    static
    {
        RollNo = 0;
    }

    public Student(String str, int iNo)
    {
        this.SName = str;
        this.Marks = iNo;
        RollNo++;
    }

    public void Display()
    {
        System.out.println("Roll No : "+RollNo+" Name : "+SName+" Marks : "+Marks);
    }
}

class Program489
{
    public static void main(String Arg[])
    {
        Student obj1 = new Student("Karthik",80);
        Student obj2 = new Student("Rutuja",91);

        obj1.Display();
        obj2.Display();
    }
}