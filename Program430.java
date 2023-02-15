import java.util.*;
import java.io.*;

class Program430
{
    public static void main(String Ar[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.exists())
        {
            FileInputStream fiobj = new FileInputStream(fobj);

            byte Buffer[] = new byte[100];
            int iRet = 0;

            while((iRet = fiobj.read(Buffer)) != -1)
            {
                System.out.println(Buffer);
            }
        }
        else
        {
            System.out.println("There is no such file");
        }
    }
}