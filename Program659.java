import java.util.*;

class StringDemo
{
    public int CntSmall(String st)
    {
        int iCount = 0;
        char Arr[] = st.toCharArray();

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Program659
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string : ");
        String str = sobj.nextLine();

        StringDemo sdobj = new StringDemo();

        int iRet = sdobj.CntSmall(str);

        System.out.println("Number of Small letters are : "+iRet);
    }
}