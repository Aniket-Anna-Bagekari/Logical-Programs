import java.util.*;

class Array
{
    public int Arr1[];
    public int Arr2[];
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

    public void OddDisplay1()
    {
        System.out.println("Odd elements of First Array are : ");

        for(int iCnt = 0; iCnt < Arr1.length; iCnt++)
        {
            if((Arr1[iCnt] % 2) != 0)
            {
                System.out.print(Arr1[iCnt]+"\t");
            }
        }
        System.out.println();
    }

    public void OddDisplay2()
    {
        System.out.println("Odd elements of Second Array are : ");

        for(int iCnt = 0; iCnt < Arr2.length; iCnt++)
        {
            if((Arr2[iCnt] % 2) != 0)
            {
                System.out.print(Arr2[iCnt]+"\t");
            }
        }
        System.out.println();
    }
}

class Program710
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

        aobj.OddDisplay1();
        aobj.OddDisplay2();
    }
}