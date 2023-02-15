import java.util.*;

class Program480
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        System.out.println(str.length());
        System.out.println(Arr.length);

        int iCount = 0;

        int i = 0;
        while(i < Arr.length)  
        {
            if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
            {
                iCount++;
            }
            i++;
        }

        System.out.println("Small characters are : "+iCount);
    }
}