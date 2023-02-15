import java.util.*;

class Array
{
    public double Arr[];

    public Array(int iSize)
    {
        Arr = new double[iSize];
    }

    public void Accept()
    {
        int iA = 1;
        Scanner sobj = new Scanner(System.in);

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter marks of "+iA+" student : ");
            Arr[iCnt] = sobj.nextDouble();
            iA++;
        }
    }
}

class MyArray extends Array
{
    public MyArray(int iNo)
    {
        super(iNo);
    }

    public void Percentage()
    {
        int iA = 1;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] > 35) && (Arr[iCnt] < 50))
            {
                System.out.println(iA+" student's grade is Pass Class");
            }
            else if((Arr[iCnt] > 50) && (Arr[iCnt] < 60))
            {
                System.out.println(iA+" student's grade is Second Class");
            }
            else if((Arr[iCnt] > 60) && (Arr[iCnt] < 70))
            {
                System.out.println(iA+" student's grade is First Class");
            }
            else if(Arr[iCnt] > 70)
            {
                System.out.println(iA+" student's grade is First Class with Distinction");
            }
            else
            {
                System.out.println(iA+" student's grade is Fail");
            }
            iA++;
        }
    }
}

class Program722
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of students : ");
        int iNo = sobj.nextInt();

        MyArray aobj = new MyArray(iNo);
        aobj.Accept();
        aobj.Percentage();
    }
}