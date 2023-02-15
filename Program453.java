import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;

class Program453
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the string : ");

        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        int iCnt = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i].equals("Demo"))
            {
                iCnt++;
            }
        }

        System.out.println("Frequency of Demo word is : "+iCnt);
    }  
}  