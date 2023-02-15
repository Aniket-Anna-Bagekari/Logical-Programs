import java.util.*;

class Array
{
    public int Arr1[], Arr2[];
    public int iA = 0, iB = 0;

    public Array(int iSize1, int iSize2)
    {
        Arr1 = new int[iSize1];
        Arr2 = new int[iSize2];
        iA = iSize1;
        iB = iSize2;
    }

    public void Accept1()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter "+iA+" elements for First Array : ");
        for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            Arr1[iCnt] = sobj.nextInt();
        }
    }

    public void Accept2()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter "+iB+" elements for Second Array : ");
        for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            Arr2[iCnt] = sobj.nextInt();
        }
    }
}

class ArrayD extends Array
{
    public ArrayD(int iSize1, int iSize2)
    {
        super(iSize1,iSize2);
    }

    public void Sum1()
    {
        int iSum = 0;

        for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            iSum = iSum + Arr1[iCnt];
        }
        System.out.println("Summation of First Array is "+iSum);
    }

    public void Sum2()
    {
        int iSum = 0;

        for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            iSum = iSum + Arr2[iCnt];
        }
        System.out.println("Summation of Second Array is "+iSum);
    }
}

class Program712
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of First Array : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter size of Second Array : ");
        int iNo2 = sobj.nextInt();

        ArrayD aobj = new ArrayD(iNo1,iNo2);
        aobj.Accept1();
        aobj.Accept2();

        aobj.Sum1();
        aobj.Sum2();
    }
}