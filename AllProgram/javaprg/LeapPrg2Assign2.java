import java.util.Scanner;
class LeapPrg2Assign2
{
  public static void main(String args[])
  {
	int year;
    System.out.println("Enter Year:");
	Scanner sc=new Scanner(System.in);
	year=sc.nextInt();
	if((year%400==0)||(year%100==0)||(year%4==0))
	{
		System.out.println( year+" "+"is leap year");
		
	}
	else
	{
		System.out.println(year+" " +"is not leap year");
		
	}
    
  }
}