import java.util.*;

class StringDemo
{
    public boolean CheckVowel(String st)
    {
        boolean bFlag = false;
        char Arr[] = st.toCharArray();

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == 'a' || Arr[iCnt] == 'e' || Arr[iCnt] ==  'i' || Arr[iCnt] ==  'o' || Arr[iCnt] ==  'u' ||
            Arr[iCnt] ==  'A' || Arr[iCnt] ==  'E' || Arr[iCnt] ==  'I' || Arr[iCnt] ==  'O' || Arr[iCnt] ==  'U')
            {
                bFlag = true;
                break;
            }
        }
        return bFlag;
    }
}
class Program661
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a string : ");
        String str = sobj.nextLine();

        StringDemo sdobj = new StringDemo();

        boolean bRet = sdobj.CheckVowel(str);
        if(bRet == true)
        {
            System.out.println("String contains Vowels");
        }
        else
        {
            System.out.println("String does not contain Vowels");
        }
    }
}