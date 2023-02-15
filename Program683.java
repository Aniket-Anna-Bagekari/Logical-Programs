import java.util.*;

class Pattern
{
    public int iRow = 0, iCol = 0;
    public char ch = 'A';

    public Pattern(int iNo1, int iNo2)
    {
        iRow = iNo1;
        iCol = iNo2;
    }

    public void Pattern()
    {
        for(int i = 1; i <= iRow; i++)
        {
            ch = 'A';
            for(int j = 1; j <= iCol; j++)
            {
                System.out.print(ch+"\t");
                ch++;
            }
            System.out.println();
        }
    }
}

class Program683
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter number of Columns : ");
        int iNo2 = sobj.nextInt();

        Pattern pobj = new Pattern(iNo1,iNo2);
        pobj.Pattern();
    }
}