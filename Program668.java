import java.util.*;

class Digit
{
    public int CountEven(int iNo)
    {
        int iDigit = 0, iCnt = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
            {
                iCnt++;
            }

            iNo = iNo / 10;
        }

        return iCnt;
    }
}

class Program668
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number : ");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit();
        int iRet = dobj.CountEven(iValue);

        System.out.println("Even Digits in "+iValue+" are "+iRet);
    }
}