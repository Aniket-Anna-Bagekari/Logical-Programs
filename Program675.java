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
    
        public int LastOccurence(int iValue)
        {
            int iCnt = 0, iCount = -1;
        
            for(iCnt = 0; iCnt < Arr.length; iCnt++)
            {
                if(Arr[iCnt] == iValue)
                {
                    iCount = iCnt;
                }
            }
        }
        return iCount;
    }
}

class Program675
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
        
        int iRet = nobj.LastOccurence(iNo2);
        System.out.println("Last Occurence of "+iNo2+" is "+iRet);
    }
}