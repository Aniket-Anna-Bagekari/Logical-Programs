import java.util.*;

class Digit
{
    public int CountDigit(int iNo)
    {
        int iDigit = 0, iCnt = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit > 3) && (iDigit < 7))
            {
                iCnt++;
            }

            iNo = iNo / 10;
        }

        return iCnt;
    }
}

class Program670
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number : ");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit();
        int iRet = dobj.CountDigit(iValue);
        
        System.out.println("Number of digits in "+iValue+" between 3 and 7 are "+iRet);
    }
}