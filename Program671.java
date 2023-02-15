import java.util.*;

class Digit
{
    public int MultiplyDigit(int iNo)
    {
        int iDigit = 0, iMult = 1;

        while(iNo != 0)
        {            
            iDigit = iNo % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }

            iMult = iMult * iDigit;
            iNo = iNo / 10;
        }

        return iMult;
    }
}

class Program671
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number : ");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit();
        int iRet = dobj.MultiplyDigit(iValue);

        System.out.println("Multiplication of Digits of "+iValue+" is "+iRet);
    }
}