import java.util.*;

class Pattern
{
    public char Arr[];

    public void Pattern(String st)
    {
        Arr = st.toCharArray();

        for(int i = 1; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr.length; j++)
            {
                System.out.print(Arr[j]+"\t");
            }
            System.out.println();
        }
    }
}

class Program693
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string : ");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Pattern(str);
    }
}