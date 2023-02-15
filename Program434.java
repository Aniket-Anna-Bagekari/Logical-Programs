import java.io.*;
import java.util.*;

class Program434
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        try
        {
            System.out.println("Enter the source file name : ");
            String Source = sobj.nextLine();

            System.out.println("Enter the destination file name : ");
            String Destination = sobj.nextLine();

            File fsource = new File(Source);
            File fdest = new File(Destination);

            boolean bRet = fsource.exists();
            if(bRet == false)
            {
                System.out.println("Source file is not existing....");
                return;
            }

            bRet = fdest.createNewFile();
            if(bRet == false)
            {
                System.out.println("Unable to create destination file....");
                return;
            }

            ////////////////////

            FileInputStream fiobj = new FileInputStream(fsource);
            FileOutputStream foobj = new FileOutputStream(fdest);

            byte Buffer[] = new byte[1024];
            int iRet = 0;
            while((iRet = fiobj.read(Buffer)) != -1)
            {
                foobj.write(Buffer);
            }

        }  // End of try
        catch(Exception obj)
        {
            System.out.println("Exception occured : "+obj);
        }
    }  // End of main
}  // End of class