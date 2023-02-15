import java.util.*;

class StringDemo
{
    public int CntDifference(String st)
    {
        int iCount1 = 0, iCount2 = 0;
        char Arr[] = st.toCharArray();

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount1++;
            }
        }
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount2++;
            }
        }
        return (iCount1 - iCount2);
    }
}

class Program660
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string : ");
        String str = sobj.nextLine();

        StringDemo sdobj = new StringDemo();

        int iRet = sdobj.CntDifference(str);
        
        System.out.println("Difference between small case and capital case is : "+iRet);
    }
}