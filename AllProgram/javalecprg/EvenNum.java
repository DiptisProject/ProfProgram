import java.util.Scanner;
class EvenNum
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
		System.out.println("Even Number are:");
		for(int n:a)
		{
		    if(n%2==0)
			System.out.println(n);
		}
		
	}
}