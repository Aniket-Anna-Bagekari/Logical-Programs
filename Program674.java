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

    public int FirstOccurence(int iValue)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iValue)
            {
                break;
            }
        }

        if(iCnt == Arr.length)
        {
            return -1;
        }
        else
        {
            return iCnt;
        }
    }
}

class Program674
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

        int iRet = nobj.FirstOccurence(iNo2);
        System.out.println("First Occurence of "+iNo2+" is "+iRet);
    }
}