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

    public void SumArrayDigits()
    {
        int iSum = 0, iDigit = 0;

        System.out.println("After Summation of Array digits : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = 0;
            while(Arr[iCnt] != 0)
            {
                iDigit = Arr[iCnt] % 10;
                iSum = iSum + iDigit;
                Arr[iCnt] = Arr[iCnt] / 10;
            }
            Arr[iCnt] = iSum;
        }
    }
}

class Program719
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array : ");
        int iNo = sobj.nextInt();

        MyArray aobj = new MyArray(iNo);
        aobj.Accept();
        aobj.Display();
        aobj.SumArrayDigits();
        aobj.Display();        
    }
}