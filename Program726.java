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

    public MyArray(int iSize)
    {
        super(iSize);
    }

    public int DiffCapSmall()
    {
        int iCount1 = 0, iCount2 = 0;

        for(int iCnt = 0; iCnt < cArr.length; iCnt++)
        {
            if((cArr[iCnt] >= 'A') && (cArr[iCnt] <= 'Z'))
            {
                iCount1++;
            }
            else if((cArr[iCnt] >= 'a') && (cArr[iCnt] <= 'z'))
            {
                iCount2++;
            }
        }

        return (iCount1 - iCount2);
    }
}

class Program726
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of Array : ");
        int iNo = sobj.nextInt();

        MyArray aobj = new MyArray(iNo);
        aobj.Accept();
        aobj.Display();

        int iRet = aobj.DiffCapSmall();
        System.out.println("Differnece between Capital and Small is : "+iRet);
    }
}