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

    public void Minimum()
    {
        int iMin1 = 0, iMin2 = 0;

        iMin1 = Arr1[0];
        iMin2 = Arr2[0];

        for(int iCnt = 1; iCnt < Arr1.length; iCnt++)
        {
            if(Arr1[iCnt] < iMin1)
            {
                iMin1 = Arr1[iCnt];
            }
        }

        for(int iCnt = 1; iCnt < Arr2.length; iCnt++)
        {   
            if(Arr2[iCnt] < iMin2)
            {
                iMin2 = Arr2[iCnt];
            }
        }

        System.out.println("Minimum element of First array is : "+iMin1);
        System.out.println("Minimum element of Second array is : "+iMin2);
    }
}

class Program714
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
        mobj.Minimum();
    }
}