import java.util.Scanner;
class VotingPrg1Assign2
{
  public static void main(String args[])
  {
	  int age;
	  System.out.print("Enter Age:");
	  Scanner sc=new Scanner(System.in);
	  age=sc.nextInt();
	  if(age>18)
	  {
		  System.out.println("Person is eligible for Voting");
	  }
	  else
	  {
		  System.out.println("Person is not eligible for Voting");
	  }
  }
}