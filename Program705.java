import java.util.*;

class Pattern
{
    public int k = 1;

    public void Pattern(int iRow, int iCol)
    {
        for(int i = 1; i <= iRow; i++)
        {
            for(int j = 1; j <= iCol; j++)
            {
                if(((i + j) == (iRow + 1)) || (i == 1) || (j == 1) || (i == iRow) || (j == iCol))
                {
                    System.out.print("*"+"\t");
                }                
                else
                {
                    System.out.print(" "+"\t");
                }
            }
            System.out.println();
        }
    }
}

class Program705
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter number of Columns : ");
        int iNo2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iNo1,iNo2);
    }
}