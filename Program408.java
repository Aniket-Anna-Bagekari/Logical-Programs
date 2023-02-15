import java.util.*;

class Program408
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();  // Inbuild Function

        System.out.println("Data is : "+Arr);  // ERROR
    }
}