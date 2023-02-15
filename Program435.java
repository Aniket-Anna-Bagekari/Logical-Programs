import java.io.*;
import java.util.*;

class Program435
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        try
        {
            System.out.println("Enter folder name : ");
            String FolderName = sobj.nextLine();
            
            File fobj = new File(FolderName);

            if(fobj.exists())
            {

            }
            else
            {
                System.out.println("There is no such folder....");
            }

        }  // End of try
        catch(Exception obj)
        {
            System.out.println("Exception occured : "+obj);
        }
    }  // End of main
}  // End of class