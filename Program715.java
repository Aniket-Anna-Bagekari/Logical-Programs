import java.util.*;

class Array
{
    public int Arr1[], Arr2[], Arr3[];

    public Array(int iSize1, int iSize2)
    {
        Arr1 = new int[iSize1];
        Arr2 = new int[iSize2];
        Arr3 = new int[iSize1 + iSize2];
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

    public void CopyArrayRev()
    {
        int i = 0, j = 0;

        i = Arr1.length - 1;
        while(i >= 0)
        {
            Arr3[j] = Arr1[i];
            i--;
            j++;
        }

        i = Arr2.length - 1;
        while(i >= 0)
        {
            Arr3[j] = Arr2[i];
            i--;
            j++;
        }
    }

    public void Display()
    {
        System.out.println("Elements of third array in reverse order is : ");
        for(int iCnt = 0; iCnt < Arr3.length; iCnt++)
        {
            System.out.print(Arr3[iCnt]+"\t");
        }
    }
}

class Program715
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
        mobj.CopyArrayRev();
        mobj.Display();
    }
}