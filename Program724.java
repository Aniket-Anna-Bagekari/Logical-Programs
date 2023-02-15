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
    public MyArray(int iSize)
    {
        super(iSize);
    }

    public int ArraySmall()
    {
        int iCount = 0;

        for(int iCnt = 0; iCnt < cArr.length; iCnt++)
        {
            if((cArr[iCnt] >= 'a') && (cArr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Program724
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of Array : ");
        int iNo = sobj.nextInt();

        MyArray aobj = new MyArray(iNo);
        aobj.Accept();
        aobj.Display();

        int iRet = aobj.ArraySmall();
        System.out.println("Small letters in array are : "+iRet);
    }
}