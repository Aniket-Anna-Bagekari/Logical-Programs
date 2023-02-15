import java.util.*;

class StringDemo
{
    public void StrReverse(String st)
    {
        char Arr[] = st.toCharArray();

        for(int iCnt = (Arr.length - 1); iCnt >= 0; iCnt--)
        {
            System.out.print(Arr[iCnt]);
        }
        System.out.println();
    }
}

class Program662
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string : ");
        String str = sobj.nextLine();

        StringDemo sdobj = new StringDemo();

        sdobj.StrReverse(str);
    }
}