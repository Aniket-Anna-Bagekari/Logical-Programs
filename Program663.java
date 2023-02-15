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

        System.out.println("Enter "+Arr.length+" elements");
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
class EvenOddDiff extends Array
{
    int iEven = 0, iOdd = 0;

    public EvenOddDiff(int iSize)
    {
        super(iSize);
    }

    public int SumEvenOdd()
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iEven = iEven + Arr[iCnt];
            }
        }        

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) != 0)
            {
                iOdd = iOdd + Arr[iCnt];
            }
        }

        return (iEven - iOdd);
    }
}

class Program663
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of Array : ");
        int iNo = sobj.nextInt();

        EvenOddDiff eoobj = new EvenOddDiff(iNo);
        eoobj.Accept();
        eoobj.Display();

        int iRet = eoobj.SumEvenOdd();
        System.out.println("Difference between Even and Odd is : "+iRet);
    }
}