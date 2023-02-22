import java.util.*;

public class GFG
{
    public static void main(String[] args)
    {
      Scanner sc = new Scanner(System.in);
      System.out.println("enter no. of rows of matrix 1");
        int a = sc.nextInt();
       int[] ary = new int[a];
       for(int i=0; i<a; i++)
                ary[i] = sc.nextInt();

      System.out.println("Inputted array is:"+ Arrays.toString(ary));
      //  int[] arr = { 13, 7, 6, 45, 21, 9, 101, 102 };
        Arrays.sort(ary);

        System.out.println("Modified arr[] : " + Arrays.toString(ary));
    }
}
