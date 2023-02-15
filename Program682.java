import java.util.*;

class StringDemo
{
    public String s1,s2;
    public int iNo = 0;
    public char Arr1[];

    public StringDemo(String str1)
    {
        s1 = str1;
        Arr1 = new char[20];
    }

    public boolean StrPallindrome()
    {
        boolean bFlag = true;
        char Arr2[] = s1.toCharArray();
        char Arr3[] = s1.toCharArray();

        for(int iCnt = (Arr2.length - 1); iCnt >= 0; iCnt--)
        {
            Arr1[iCnt] = Arr2[iCnt];
        }

        for(int iCnt = (Arr2.length - 1); iCnt >= 0; iCnt--)
        {
            System.out.print(Arr1[iCnt]);
        }
        System.out.println();

        for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            if(Arr3[iCnt] == Arr1[iCnt])
            {
                bFlag = false;
                break;
            }
        }   
        return bFlag;
    }
}

class Program682
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a String : ");
        String str1 = sobj.nextLine();

        StringDemo stobj = new StringDemo(str1);
        
        boolean bRet = stobj.StrPallindrome();
        if(bRet == true)
        {
            System.out.println("Given String is Pallindrome");
        }
        else
        {
            System.out.println("Given String is not Pallindrome");
        }
    }
}