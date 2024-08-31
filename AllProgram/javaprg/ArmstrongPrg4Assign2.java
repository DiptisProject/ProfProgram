import java.util.Scanner;
class ArmstrongPrg4Assign2
{
  public static void main(String args[])
  {
	int n;
	System.out.println("Enter any number:");
	Scanner sc= new Scanner(System.in);
	n=sc.nextInt();
	armstrong(n);
  }
  public static int armstrong(int x)
   {
        int sum=0,num,p;
        num=x;
        while(x>0)
        {
            p=x%10;
            sum=sum+(p*p*p);
            x=x/10;
        }
        if(sum==num)
        {
            System.out.println("The given no  is a Armstrong Number\n"+sum);
        }
        else
        {
        	System.out.println("It is not a Armstrong Number");
        }
		return sum;
	}

}
  
	  