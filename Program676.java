import java.util.*;

class Array
{
    int Arr[];

    public Array(int iNo)
    {
        Arr = new int[iNo];
    }

    public void Accept()
    {
        System.out.println("Enter "+Arr.length+" array elements : ");

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

class Number extends Array
{
    public Number(int iSize)
    {
        super(iSize);
    }

    public void Range(int iStart, int iEnd)
    {
        System.out.println("Elements between the range are : "); 
             
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
            {
                System.out.print(Arr[iCnt]+"\t");     
            }
        }
        System.out.println();
    }
}
class Program676
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of Array : ");
        int iNo = sobj.nextInt();

        Number nobj = new Number(iNo);
        nobj.Accept();
        nobj.Display();

        System.out.println("Enter starting range : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter ending range : ");
        int iValue2 = sobj.nextInt();
        
        nobj.Range(iValue1,iValue2);
    }
}