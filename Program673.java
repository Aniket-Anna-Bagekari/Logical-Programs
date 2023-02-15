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
    public boolean bFlag = false;

    public Number(int iSize)
    {
        super(iSize);
    }

    public boolean Check(int iValue)
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iValue)
            {
                bFlag = true;
                break;
            }
        }

        return bFlag;
    }
}

class Program673
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of Array : ");
        int iNo1 = sobj.nextInt();

        Number nobj = new Number(iNo1);
        nobj.Accept();
        nobj.Display();

        System.out.println("Enter element to find : ");
        int iNo2 = sobj.nextInt();
        
        boolean bRet = nobj.Check(iNo2);
        if(bRet == true)
        {
            System.out.println("Element is present in the Array");
        }
        else
        {
            System.out.println("Element is not present in the Array");
        }
    }
}