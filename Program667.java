import java.util.*;

class Array
{
    public int Arr[];

    public Array(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        System.out.println("Enter "+Arr.length+" elements of Array");

        Scanner sobj = new Scanner(System.in);
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
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
    public ArrayX(int iSize)
    {
        super(iSize);
    }

    public void MultipleOf11()
    {
        System.out.println("Multiples of 11 are : ");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 11) == 0)
            {
                System.out.println(Arr[iCnt]);
            }
        }
        System.out.println();
    }
}

class Program667
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of Array : ");
        int iNo = sobj.nextInt();

        ArrayX aobj = new ArrayX(iNo);
        aobj.Accept();
        aobj.Display();
        aobj.MultipleOf11();
    }
}