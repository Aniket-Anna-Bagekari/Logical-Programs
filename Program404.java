import java.util.*;

class MarvellousX
{
    public void Display(String s)
    {
        for(int iCnt = 0; iCnt < s.length(); iCnt++)
        {
            System.out.println(s.charAt(iCnt));  // Inbuild Function  
        }
    }
}

class Program404
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string : ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        obj.Display(str);
    }
}