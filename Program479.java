import java.util.*;

class Program479
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

        for(char Ch : Arr)  // for each loop
        {
            if((Ch >= 'a') && (Ch <= 'z'))
            {
                iCount++;
            }
        }

        System.out.println("Small characters are : "+iCount);
    }
}