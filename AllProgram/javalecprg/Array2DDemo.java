class Array2DDemo
{
	public static void main(String []args)
	{   
	    /*declaration memory allocation
		int a[][]=new int[2][3];
		
		//initialization
		a[0][0]=0;
		a[0][1]=1;
		a[0][2]=2;
		
		a[1][0]=10;
		a[1][1]=11;
		a[1][2]=12;*/
		
		int a[][]={{1,2,3},{4,5,6}};
		for(int i=0;i<a.length;i++)
		{
			for(int j=0;j<a[i].length;j++)
			{
				System.out.print(a[i][j]+" ");
			}
			System.out.println(" ");
		}
	}
}