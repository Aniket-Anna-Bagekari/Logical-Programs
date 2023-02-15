import java.util.*;

class Array
{
    public char cArr[];

    public Array(int iSize)
    {
        cArr = new char[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements of Array : ");
        for(int iCnt = 0; iCnt < cArr.length; iCnt++)
        {
            char c = sobj.next().charAt(0);
            cArr[iCnt] = c;
        }
    }

    public void Display()
    {
        System.out.println("Elements of Array are : ");
        for(int iCnt = 0; iCnt < cArr.length; iCnt++)
        {
            System.out.print(cArr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class MyArray extends Array
{
    public char iC;

    public MyArray(int iSize, char c)
    {
        super(iSize);
        iC = c;
    }

    public int SearchElement()
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < cArr.length; iCnt++)
        {
            if(cArr[iCnt] == iC)
            {
                break;
            }
        }

        if(iCnt == cArr.length)
        {
            return -1;
        }
        else
        {
            return iCnt;
        }
    }
}

class Program725
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of Array : ");
        int iNo = sobj.nextInt();

        System.out.println("Enter the element to find its Occurence : ");
        char iC = sobj.next().charAt(0);

        MyArray aobj = new MyArray(iNo,iC);
        aobj.Accept();
        aobj.Display();

        int iRet = aobj.SearchElement();
        System.out.println(iC+" Occured at "+iRet+" Position");
    }
}