import java.util.*;

class StringDemo
{
    public String s1,s2;
    public int iNo;
    public char Arr3[];

    public StringDemo(String str1, String str2, int iA)
    {
        s1 = str1;
        s2 = str2;
        iNo = iA;
        Arr3 = new char[iNo * 10];
    }

    public void StrNCatX()
    {
        int i = 0, j = 0; 

        char Arr1[] = s1.toCharArray();
        char Arr2[] = s2.toCharArray();

        while(i < Arr1.length)
        {
            Arr3[i] = Arr1[i];
            i++; 
        }

        while((j < Arr2.length) && (j < iNo))
        {
            Arr3[i] = Arr2[j];
            i++;
            j++;
        }
    }
}

class StringDemoX extends StringDemo
{
    public StringDemoX(String str1, String str2, int iA)
    {
        super(str1,str2,iA);
    }

    public void StringDisplay()
    {
        for(int k = 0; k < Arr3.length; k++)
        {
            System.out.print(Arr3[k]);
        }
        System.out.println();
    }
}

class Program678
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter Second String : ");
        String str2 = sobj.nextLine();

        System.out.println("How many numbers are to be concat : ");
        int iA = sobj.nextInt();

        StringDemoX stobj = new StringDemoX(str1,str2,iA);
        stobj.StrNCatX();
        stobj.StringDisplay();
    }
}