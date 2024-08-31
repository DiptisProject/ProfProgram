class AcceptValuePrg5
{
  public static void main(String[]args)
  {
    int sum=0,n;
	for(int i=0;i<args.length;i++)
	{
       n=Integer.parseInt(args[i]);
	   sum+=n;
	}
	System.out.println("Sum:"+sum);
  }
}
