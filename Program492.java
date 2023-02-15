// Refer Java Collections Documentation

import java.util.*;

class Program492
{
    public static void main(String Arg[])
    {
        LinkedList <Integer> obj = new LinkedList();

        obj.add(897);
        obj.add(21);
        obj.add(51);

        obj.remove(0);

        System.out.println("Data is : "+obj);

        for(int iNo : obj)
        {
            System.out.println(iNo);
        }
    }
}