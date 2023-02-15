import java.util.*;

class Pattern
{
    public char Arr[];

    public void Pattern(String st)
    {
        Arr = st.toCharArray();

        for(int i = (Arr.length - 1); i >= 0; i--)
        {
            for(int j = 0; j <= i; j++)
            {
                System.out.print(Arr[j]+"\t");
            }
            System.out.println();
        }
    }
}

class Program694
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