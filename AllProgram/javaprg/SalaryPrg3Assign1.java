import java.util.Scanner;
public class SalaryPrg3Assign1
 {
    public static void main(String[] args) 
	{
		double da,hra,gross,incomeTax;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter basic salary: ");
        double basic = scanner.nextDouble();
		
        da = 0.20 * basic;
        hra = 0.30 * basic;
        gross = basic + da + hra;
        incomeTax = 0;
        if (basic > 0 && basic < 4000) 
		{
            incomeTax = 0.04 * basic;
        } 
		else if (basic >= 4000 && basic < 10000)
		{
            incomeTax = 0.06 * basic;
        }
		else if (basic >= 10000 && basic < 17000)
		{
            incomeTax = 0.08 * basic;
        } 
		else if (basic >= 17000 && basic < 27000) 
		{
            incomeTax = 0.10 * basic;
        } 
		else if (basic >= 27000) 
		{
            incomeTax = 0.15 * basic;
        }

        System.out.println("DA: " + da);
        System.out.println("HRA: " + hra);
        System.out.println("Gross Salary: " + gross);
        System.out.println("Income Tax: " + incomeTax);
    }
}
