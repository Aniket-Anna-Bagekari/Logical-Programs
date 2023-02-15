import java.util.*;

class Program506
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        HashMap <String, Integer> hobj = new HashMap();
        int Frequency = 0;

        for(String ch : Arr)
        {
            if(hobj.containsKey(ch))
            {
                Frequency = hobj.get(ch);
                hobj.put(ch,Frequency+1);
            }
            else
            {
                hobj.put(ch,1);
            }
        }

        Set <String> setobj = hobj.keySet();

        int iMax = 0;
        String sMax = " ";

        for(String sValue : setobj)
        {
            if(iMax < hobj.get(sValue))
            {
                iMax = hobj.get(sValue);
                sMax = sValue;
            }
        }

        System.out.println("Maximum times occured word is : "+sMax+" with frequency "+iMax);
    }
}