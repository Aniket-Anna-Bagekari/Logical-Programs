import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;

class Program459
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("---------------------Marvellous Packer Unpacker CUI Panel----------------------");

        try
        {
            System.out.println("Enter the name of packed file : ");
            System.out.println("Note : Packed file should be in the current directory");

            String PackFile = sobj.nextLine();
            File fpackobj = new File(PackFile);
            
            FileInputStream fin = new FileInputStream(fpackobj);
            int iRet = 0, Count = 0;
            byte Header[] = new byte[100];

            if(fpackobj.exists())
            {
                while((iRet = fin.read(Header,0,100)) > 0)
                {
                    String StrHeader = new String(Header);

                    String Arr[] = StrHeader.split(" ");
        
                    File obj = new File(Arr[0]);
                    obj.createNewFile();
                    System.out.println("New File dropped with name : "+Arr[0]);

                    int FileSize = Integer.parseInt(Arr[1]);

                    byte DataArray[] = new byte[FileSize];

                    fin.read(DataArray,0,FileSize);

                    FileOutputStream fout = new FileOutputStream(obj);
                    fout.write(DataArray,0,FileSize);

                    Count++;
                }
                System.out.println("-----------------------------------Summary-------------------------------------");
                System.out.println("Number of files unpacked successfully : "+Count);

                System.out.println("Thank you for using Marvellous Packer Unpacker Application.");
            }
            else
            {
                System.out.println("There is no such file..");
            }

        }  // End of try
        catch(Exception obj)
        {
            System.out.println("Exception occured : "+obj);
        }
    }  // End of main
}  // End of class