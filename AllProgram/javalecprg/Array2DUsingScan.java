import java.util.Scanner;
class Array2DUsingScan
{
	public static void main(String []args)
	{   
		int a[]=new int[4];
		Scanner sc=new Scanner(System.in);
		for(int i=0;i<a.length;i++)
		{
			System.out.println("a["+i+"]: ");
			a[i]=sc.nextInt();
		}
		System.out.println("You Entered Number:");
		for(int n:a)
		{
			System.out.println(n);
		}
		
	}
}