import java.util.*;

class StringDemo
{
    public String s1,s2;
    public int iNo = 0, iStart = 0, iEnd = 0, iTemp = 0;

    public StringDemo(String str1)
    {
        s1 = str1;
    }

    public void StrRevTogX()
    {
        char Arr[] = s1.toCharArray();
        iStart = Arr[0];
        iEnd = Arr.length;

        while(iStart < iEnd)
        {
            iTemp = iStart;
            iStart = iEnd;
            iEnd = iTemp;

            iStart++;
            iEnd--;
        }

        System.out.println("Reverse String is : ");
        for(int iCnt = (Arr.length - 1); iCnt >= 0; iCnt--)
        {
            System.out.print(Arr[iCnt]);
        }
        
        System.out.println();
    }
}

class Program681
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a String : ");
        String str1 = sobj.nextLine();

        StringDemo stobj = new StringDemo(str1);
        stobj.StrRevTogX();
    }
}