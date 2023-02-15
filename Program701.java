import java.util.*;

class Pattern
{
    public char Arr[];

    public void Pattern(String s1)
    {
        Arr = s1.toCharArray();

        for(int i = 0; i < (Arr.length - 1); i++)
        {
            for(int j = 0; j < Arr.length; j++)
            {
                if(j < (Arr.length - i))
                {
                    System.out.print(Arr[j]+"\t");
                }
                else
                {
                    System.out.print("*"+"\t");
                }
            }
            System.out.println();
        }

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr.length; j++)
            {
                if(j > i)
                {
                    System.out.print("*"+"\t");
                }
                else
                {
                    System.out.print(Arr[j]+"\t");
                }
            }
            System.out.println();
        }
    }
}

class Program701
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string");
        String str = sobj.nextLine();        

        Pattern pobj = new Pattern();
        pobj.Pattern(str);
    }
}