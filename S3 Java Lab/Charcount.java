//java program to count the number of specific character in a string


import java.io.*;
import java.util.*;

class CharacterCount
{
 public static void main(String[] args)
 	{
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a string to count the characters");
        String str=sc.nextLine();

        int num=0;
        int space=0;

        // one variable acts as the counter for all alphabets

 for(char alp='a';alp=<'z';alp++)
	{

  	for(int i=0;i<str.length();i++)
  		{
  		if(str.charAt(i)==alp)
  			num++;


  		}
  	if(num!=0)

  	System.out.println("The letter "+alp+ " is present "+num+" times");
  	num=0;


}
System.out.println("Number of spaces in"+str+" is "+space);

	}}
