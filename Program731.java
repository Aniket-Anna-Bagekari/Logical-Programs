import java.util.*;

class Array
{
    public char sArr[], cArr[];
    public char Ch;
    public String s1;

    public Array(String str, char c)
    {
        sArr = str.toCharArray();
        cArr = new char[sArr.length];
        Ch = c;
    }

    public void RemoveChar()
    {
        for(int iCnt = 0; iCnt < sArr.length; iCnt++)
        {
            if(sArr[iCnt] != Ch)
            {
                cArr[iCnt] = sArr[iCnt];
            }
        }
        s1 = new String(cArr);
    }

    public void Display()
    {
        System.out.println("String after removing "+Ch+" word is : ");
        System.out.println(s1);
    }
}

class Program731
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string : ");
        String str = sobj.nextLine();

        System.out.println("Enter the letter to remove from String : ");
        char c = sobj.next().charAt(0);

        Array aobj = new Array(str,c);
        aobj.RemoveChar();
        aobj.Display();
    }
}