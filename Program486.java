import java.util.*;

class Program486
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string : ");
        String str = sobj.nextLine();

        String newstr = str.trim();    //// to remove multiple white spaces which are before string and after string not middle

        String Arr[] = newstr.split(" ");   //// 

        System.out.println("Number of words are : "+Arr.length);        
    }
}