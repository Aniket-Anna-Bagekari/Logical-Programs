import java.util.*;

class Digit
{
    public int CountDigitsDifference(int iNo)
    {
        int iDigit = 0, iEven = 0, iOdd = 0;

        while(iNo != 0)
        {            
            iDigit = iNo % 10;

            if((iDigit % 2) == 0)
            {
                iEven = iEven + iDigit;
            }
            else
            {
                iOdd = iOdd + iDigit;
            }            

            iNo = iNo / 10;
        }

        return (iEven - iOdd);
    }
}

class Program672
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number : ");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit();
        int iRet = dobj.CountDigitsDifference(iValue);
        
        System.out.println("Difference of even and odd of "+iValue+" is "+iRet);
    }
}