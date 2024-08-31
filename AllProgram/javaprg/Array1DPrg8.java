class Array1DPrg8
{
  public static void main(String[]args)
 {
	int a[]=new int[3];
	int sum=0;
	for(int i=0;i<args.length;i++)
	{   
        System.out.print(args[i]+" ");
        a[i]=Integer.parseInt(args[i]);
		sum+=a[i];		
	}
	System.out.println("  ");
	System.out.println("Sum:"+sum);
 }
}








