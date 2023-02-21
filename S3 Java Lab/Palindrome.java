import java.io.*;
import java.util.*;

class Palindrome
{
  public static void main (String args [])
  {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the String to check for palindrome: ");
    String s=sc.nextLine();
    int flag=0;
    for (int i=0;i<s.length()/2 ;i++ )
    {
      if(s.charAt(i) == s.charAt(s.length()-1-i))
      {
        flag = 1;
        break;
      }
    }
    if(flag==0)
    System.out.println("Is NOt a palindrome");
    else
    System.out.println("Is a palindrome");

  }
}
