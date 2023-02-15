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

    public int OddProduct()
    {             
        int iOdd = 1;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) != 0)
            {
                iOdd = iOdd * Arr[iCnt];     
            }
        }

        return iOdd;
    }
}

class Program677
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of Array : ");
        int iNo = sobj.nextInt();

        Number nobj = new Number(iNo);
        nobj.Accept();
        nobj.Display();

        int iRet = nobj.OddProduct();
        if(iRet == 1)
        {
            iRet = 0;
        }
        
        System.out.println("Product of Odd element is : "+iRet);
    }
}