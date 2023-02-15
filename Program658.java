import java.util.*;

class StringDemo
{
    public int CntCapital(String st)
    {
        int iCount = 0;
        char Arr[] = st.toCharArray();

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

class Program658
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string : ");
        String str = sobj.nextLine();

        StringDemo sdobj = new StringDemo();

        int iRet = sdobj.CntCapital(str);

        System.out.println("Number of Capital letters are : "+iRet);
    }
}