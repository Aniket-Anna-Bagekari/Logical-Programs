import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;

class Program446
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("---------------------Marvellous Packer Unpacker CUI Panel----------------------");

        try
        {
            System.out.println("Enter folder name which contains files that you want to pack: ");
            String FolderName = sobj.nextLine();
            
            File fobj = new File(FolderName);

            System.out.println("Enter the name of packed file that you want to create : ");
            System.out.println("Note : Packed file gets automatically created in the current directory");
            
            String PackFile = sobj.nextLine();

            File fpackobj = new File(PackFile);
            fpackobj.createNewFile();

            FileOutputStream fout = new FileOutputStream(fpackobj);

            if(fobj.exists())
            {
                File allfiles[] = fobj.listFiles();

                System.out.println("File names are : ");

                byte Buffer[] = new byte[1024];
                int iRet = 0, Counter = 0;

                String name;

                for(int i = 0; i < allfiles.length; i++)
                {
                    name = allfiles[i].getName();
                    
                    if(name.endsWith(".txt"))  // To check file extension
                    {
                        name = name + " " + (allfiles[i].length());                        
                        System.out.println("File Name : "+allfiles[i].getName()+" with length : "+allfiles[i].length()+" bytes");

                        for(int j = name.length(); j < 100; j++)  // Header formation
                        {
                            name = name + " ";
                        }

                        byte HeaderByte[] = name.getBytes();  // String to byte array coversion

                        fout.write(HeaderByte,0,HeaderByte.length);  // write header in packed file

                        FileInputStream fiobj = new FileInputStream(allfiles[i]);

                        while((iRet = fiobj.read(Buffer)) != -1)
                        {
                            fout.write(Buffer,0,iRet);
                        }
                        Counter++;
                    }
                }
                System.out.println("-----------------------------------Summary-------------------------------------");
                System.out.println("Number of files scanned : "+allfiles.length);
                System.out.println("Number of files packed successfully : "+Counter);

                System.out.println("Thank you for using Marvellous Packer Unpacker Application.");
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