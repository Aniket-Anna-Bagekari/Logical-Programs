import java.util.*;

class Array
{
    public int Arr1[], Arr2[];

    public Array(int iSize1, int iSize2)
    {
        Arr1 = new int[iSize1];
        Arr2 = new int[iSize2];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements for First array : ");
        for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            Arr1[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter elements for Second array : ");
        for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            Arr2[iCnt] = sobj.nextInt();
        }
    }
}

class MyArray extends Array
{
    public MyArray(int iSize1, int iSize2)
    {
        super(iSize1,iSize2);
    }

    public int DiffArray()
    {
        int iSum1 = 0, iSum2 = 0;

        for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            iSum1 = iSum1 + Arr1[iCnt];
        }
        
        for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            iSum2 = iSum2 + Arr2[iCnt];
        }

        return (iSum1 - iSum2);
    }
}

class Program713
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of First array : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter size of Second array : ");
        int iNo2 = sobj.nextInt();

        MyArray mobj = new MyArray(iNo1,iNo2);
        mobj.Accept();

        int iRet = mobj.DiffArray();
        System.out.println("Difference between the summation of both array is : "+iRet);
    }
}