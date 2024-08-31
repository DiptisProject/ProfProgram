import java.util.Scanner;
class FiboSeriesPrg6Assign2
{
   public static void main(String[] args) 
   {
		
		int n;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter any number");
		n=sc.nextInt();
		System.out.println("Fibonnaci series is:");
		
		for(int i=0; i<n;i++)
		System.out.print(fibo(i)+" ");

	}
	private static int fibo(int n) 
	{
		
		if(n==0)
	        return 0;
	    else if(n==1)
	        return 1;
	    else
	        return fibo(n-2)+fibo(n-1);
		
	}
}