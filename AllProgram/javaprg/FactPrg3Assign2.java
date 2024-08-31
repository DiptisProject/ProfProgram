import java.util.Scanner;
class FactPrg3Assign2
{
  public static void main(String args[])
  {
    int n;
	System.out.println("Enter any number:");
	Scanner sc= new Scanner(System.in);
	n=sc.nextInt();
	System.out.println("Factorial is:"+fact(n));
  }
  private static int fact(int n) 
    {
		
		 if(n>=1)
		    {
		        return n*fact(n-1);
		    }
		    else
		    {
		       return 1;
		    }
	}

}
	
	