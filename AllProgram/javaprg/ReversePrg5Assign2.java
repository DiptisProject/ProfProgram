import java.util.Scanner;
class ReversePrg5Assign2
{
  public static void main(String args[])
   {
	  int n;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter any number");
		n=sc.nextInt();
		System.out.println("Reverse number is:"+reverse(n));
		

	}

	private static int reverse(int n) 
	{
		// TODO Auto-generated method stub
		int rem,rev=0;
		while(n>0)
		{
			rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}
		return rev;
	}

}