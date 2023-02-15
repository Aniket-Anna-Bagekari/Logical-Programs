import java.util.*;

class MarvellousX
{
    public int CapitalCount(String s)
    {
        int iCount = 0;
        char Arr[] = s.toCharArray();

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }  
        }
        return iCount;
    }
}

class Program410
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string : ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = obj.CapitalCount(str);

        System.out.println("Number of Capital case letters are : "+iRet);
    }
}