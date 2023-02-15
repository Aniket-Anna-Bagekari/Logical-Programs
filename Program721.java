import java.util.*;

class Array
{
    public String str[];
    public char Arr[];
    public String s1;

    public Array(String str)
    {
        s1 = str;
    }

    public void Display()
    {
        Arr = s1.toCharArray();

        System.out.println("Elements of Array are : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+" ");
        }
        System.out.println();
    }
}

class MyArray extends Array
{
    public MyArray(String st)
    {
        super(st);
    }

    public int ArrayCapital()
    {
        int iCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Program721
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter characters to store in array : ");
        String str = sobj.nextLine();

        MyArray aobj = new MyArray(str);
        aobj.Display();
        int iRet = aobj.ArrayCapital();

        System.out.println("Capital letters in array are : "+iRet);
    }
}