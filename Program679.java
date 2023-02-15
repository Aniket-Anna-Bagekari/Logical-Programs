import java.util.*;

class StringDemo
{
    public String s1,s2;

    public StringDemo(String str1, String str2)
    {
        s1 = str1;
        s2 = str2;
    }

    public boolean StrCmpX()
    {
        boolean bFlag = true;

        char Arr1[] = s1.toCharArray();
        char Arr2[] = s2.toCharArray();

        for(int iCnt = 0; ((iCnt < Arr1.length) && (iCnt < Arr2.length)); iCnt++)
        {
            if(Arr1[iCnt] != Arr2[iCnt])
            {
                bFlag = false;
                break;
            }
        }

        return bFlag;
    }
}

class Program679
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First String : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter Second String : ");
        String str2 = sobj.nextLine();

        StringDemo stobj = new StringDemo(str1,str2);
        
        boolean bRet = stobj.StrCmpX();
        if(bRet == true)
        {
            System.out.println("Strings are equal");
        }
        else
        {
            System.out.println("Strings are not equal");
        }
    }
}