import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;

class Program431
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
                String str = new String(Buffer,StandardCharsets.UTF_8);
                System.out.println(str);
            }
        }
        else
        {
            System.out.println("There is no such file");
        }
    }
}