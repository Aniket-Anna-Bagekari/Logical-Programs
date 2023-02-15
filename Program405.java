import java.util.*;

class MarvellousX
{
    public int SmallCount(String s)
    {
        int iCount = 0;

        for(int iCnt = 0; iCnt < s.length(); iCnt++)
        {
            if((s.charAt(iCnt) >= 'a') && (s.charAt(iCnt) <= 'z'))
            {
                iCount++;
            }  
        }
        return iCount;
    }
}

class Program405
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string : ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = obj.SmallCount(str);

        System.out.println("Number of small case letters are : "+iRet);
    }
}