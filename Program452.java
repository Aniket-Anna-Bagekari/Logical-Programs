import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;

class Program452
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the string : ");

        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        System.out.println("Number of words are : "+Arr.length);

        int iMax = 0;
        int iMaxIndex = 0;
        
        for(int i = 0; i < Arr.length; i++)
        {
            if(iMax < Arr[i].length())
            {
                iMax = Arr[i].length();
                iMaxIndex = i;
            }
        }

        System.out.println("Largest word from the string is : "+Arr[iMaxIndex]+" with the length : "+iMax);
    }  
}  