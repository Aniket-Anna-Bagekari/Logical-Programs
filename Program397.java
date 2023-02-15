// Prefer 395 instead of this // 

import java.util.*;

class Program397
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Elements of array are : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        int iSum = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        System.out.println("Addition of all elements is : "+iSum);
    }
}