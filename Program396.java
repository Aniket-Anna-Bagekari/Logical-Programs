// Prefer 395 instead of this // 

import java.util.*;

class Program396
{
    public static void main(String a[])
    {
        int Arr[] = {10,20,30,40,50};
        int iSum = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        System.out.println("Addition of all elements is : "+iSum);
    }
}