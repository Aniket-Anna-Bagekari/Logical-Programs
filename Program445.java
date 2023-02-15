import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;

class Program445
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

                String name;

                for(int i = 0; i < allfiles.length; i++)
                {
                    name = allfiles[i].getName();
                    
                    if(name.endsWith(".txt"))  // To check file extension
                    {
                        name = name + " " + (allfiles[i].length());

                        for(int j = name.length(); j < 100; j++)
                        {
                            name = name + " ";
                        }

                        System.out.println("Header : "+name+" with length : "+name.length());

                        byte HeaderByte[] = name.getBytes();  // String to byte array coversion

                        fout.write(HeaderByte,0,HeaderByte.length);  // write header in packed file

                        FileInputStream fiobj = new FileInputStream(allfiles[i]);

                        while((iRet = fiobj.read(Buffer)) != -1)
                        {
                            fout.write(Buffer,0,iRet);
                        }
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