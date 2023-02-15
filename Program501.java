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

        Scanner sobj = new Scanner(System.in);
        String Query = " ";
        int QuerySize = 0;

        while(true)
        {
            System.out.print("Marvellous DBMS : > ");
            Query = sobj.nextLine();

            String Tokens[] = Query.split(" ");
            QuerySize = Tokens.length;

            if(QuerySize == 1)
            {
                if("help".equals(Tokens[0]))
                {
                    System.out.println("This application is used to demonstrate the features of Customized DBMS.");
                    System.out.println("Display all the data : select * from student");
                    System.out.println("Insert new record : insert into student values Name Marks");
                    System.out.println("Terminate the project : exit");
                    // Add more
                }
                else if("exit".equals(Tokens[0]))
                {
                    System.out.println("Thank you for using our customized DBMS.");
                    break;
                }
            }
            else if(QuerySize == 2)
            {

            }
            else if(QuerySize == 3)
            {

            }
            else if(QuerySize == 4)
            {
                if("select".equals(Tokens[0]))
                {
                    if("*".equals(Tokens[1]))
                    {
                        DisplayAll();
                    }
                }
            }
            else if(QuerySize == 6)
            {
                if("insert".equals(Tokens[0]))
                {
                    if("student".equals(Tokens[2]))
                    {
                        Insert(Tokens[4],Integer.parseInt(Tokens[5]));
                    }
                }
            }
        }  // End of while
    }  // End of StartDBMS

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

    // select * from Student where SName = 'Rutuja';
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

    // delete from Student where SName = 'Ram';
    public void Delete(String str)
    {
        int index = 0;

        for(Student sRef : lobj)
        {
            if(str.equals(sRef.SName))
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }

    // Addition of Marks
    public void Sum()
    {
        int iSum = 0;

        for(Student sRef : lobj)
        {
            iSum = iSum + (sRef.Marks);
        }

        System.out.println("Summation of marks : "+iSum);
    }

    // Maximum of Marks
    public void Max()
    {
        int iMax = 0;

        for(Student sRef : lobj)
        {
            if(sRef.Marks > iMax)
            {
                iMax = sRef.Marks;
            }
        }

        System.out.println("Maximum is : "+iMax);
    }

    // Minimum of Marks
    public void Min()
    {
        Student s = lobj.get(0);

        int iMin = s.Marks;

        for(Student sRef : lobj)
        {
            if(sRef.Marks < iMin)
            {
                iMin = sRef.Marks;
            }
        }

        System.out.println("Minimum is : "+iMin);
    }

    // Average of Marks
    public void Avg()
    {
        int iSum = 0;

        for(Student sRef : lobj)
        {
            iSum = iSum + (sRef.Marks);
        }

        System.out.println("Average is : "+(iSum / lobj.size()));
    }
}

class Program501
{
    public static void main(String Arg[])
    {
        DBMS dobj = new DBMS();

        dobj.StartDBMS();
    }
}