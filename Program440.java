import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;

class Program440
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        try
        {
            System.out.println("Enter folder name : ");
            String FolderName = sobj.nextLine();
            
            File fobj = new File(FolderName);

            System.out.println("Enter the name of packed file : ");
            String PackFile = sobj.nextLine();

            File fpackobj = new File(PackFile);
            fpackobj.createNewFile();

            FileOutputStream fout = new FileOutputStream(fpackobj);

            if(fobj.exists())
            {
                File allfiles[] = fobj.listFiles();

                System.out.println("Number of files are : "+allfiles.length);

                System.out.println("File names are : ");

                byte Buffer[] = new byte[1024];
                int iRet = 0;

                for(int i = 0; i < allfiles.length; i++)
                {
                    System.out.println("File name : "+allfiles[i].getName()+"  Size : "+allfiles[i].length()+" bytes");

                    FileInputStream fiobj = new FileInputStream(allfiles[i]);

                    while((iRet = fiobj.read(Buffer)) != -1)
                    {
                        fout.write(Buffer);
                    }
                }
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