import java.util.*;

class Array
{
    protected int Arr[];

    protected Array(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter "+Arr.length+" elements");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        System.out.println("Elements of Array are : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class ArrayX extends Array
{
    int iEven = 0, iOdd = 0;

    public ArrayX(int iSize)
    {
        super(iSize);
    }

    public void DivisibleByFive()
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 5) == 0)
            {
                System.out.println(Arr[iCnt]+" is divisible by 5");
            }
        }
    }
}

class Program664
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of Array : ");
        int iNo = sobj.nextInt();

        ArrayX aobj = new ArrayX(iNo);
        aobj.Accept();
        aobj.Display();
        aobj.DivisibleByFive();
    }
}