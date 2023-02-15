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
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements of Array : ");
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

class MyArray extends Array
{
    public MyArray(int iSize)
    {
        super(iSize);
    }

    public void ReverseArray()
    {
        int iRev = 0;

        System.out.println("After reversing the digits : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iRev = 0;
            while(Arr[iCnt] != 0)
            {
                iRev = ((iRev * 10) + (Arr[iCnt] % 10));
                Arr[iCnt] = Arr[iCnt] / 10;
            }
            Arr[iCnt] = iRev;
        }
    }
}

class Program718
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        int iNo = sobj.nextInt();

        MyArray aobj = new MyArray(iNo);
        aobj.Accept();
        aobj.Display();
        aobj.ReverseArray();
        aobj.Display();        
    }
}