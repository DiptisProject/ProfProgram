import java.util.Scanner;
class ThreeDigitNoPrg6
{
  public static void main(String[]args)
  {
    int i,num,digit,sum=0;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter a number:");
	num=sc.nextInt();
	while(num>0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
   System.out.println(sum);
  }
}