import java.util.*;

class MarvellousX
{
    public int DigitCount(String s)
    {
        int iCount = 0;

        for(int iCnt = 0; iCnt < s.length(); iCnt++)
        {
            if((s.charAt(iCnt) >= '0') && (s.charAt(iCnt) <= '9'))
            {
                iCount++;
            }  
        }
        return iCount;
    }
}

class Program407
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string : ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = obj.DigitCount(str);

        System.out.println("Number of Digits are : "+iRet);
    }
}