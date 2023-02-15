import java.util.*;

interface Marvellous
{
    public void BubbleSort();
    public void SelectionSort();
    public void InsertionSort();
}

class Sorting implements Marvellous
{
    private int Arr[];

    public Sorting(int iSize)
    {
        Arr = new int[iSize];
    }        

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of array are : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

    public void InsertionSort()
    {
        int i = 0, j = 0, Selected = 0;

        for(i = 1; i < Arr.length; i++)
        {
            for(j = (i - 1), Selected = Arr[i]; (j >= 0) && (Arr[j] > Selected); j--)
            {
                Arr[j + 1] = Arr[j];
            }
            Arr[j + 1] = Selected;
        }
    }

    public void SelectionSort()
    {
        int i = 0, j = 0, Min_Index = 0, temp = 0;

        for(i = 0; i < (Arr.length - 1); i++)
        {
            Min_Index = i;
            for(j = (i + 1); j < Arr.length; j++)
            {
                if(Arr[j] < Arr[Min_Index])
                {
                    Min_Index = j;
                }
            }

            temp = Arr[i];
            Arr[i] = Arr[Min_Index];
            Arr[Min_Index] = temp;
        }
    }

    public void BubbleSort()
    {
        int i = 0, j = 0, temp = 0;
        boolean bFlag = false;

        for(i = 0; i < Arr.length; i++)
        {
            bFlag = false;

            for(j = 0; j < (Arr.length - i - 1); j++)
            {
                if(Arr[j] > Arr[j + 1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j + 1];
                    Arr[j + 1] = temp;

                    bFlag = true;
                }
            }
            if(bFlag == false)
            {
                break;
            }
        }
    }
}

class Program468
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iSize = sobj.nextInt();

        Sorting obj = new Sorting(iSize);
        obj.Accept();
        obj.Display();

        obj.InsertionSort();
        obj.Display();

        /*  obj.SelectionSort();
        obj.Display();

        obj.BubbleSort();
        obj.Display();  */  
    }
}