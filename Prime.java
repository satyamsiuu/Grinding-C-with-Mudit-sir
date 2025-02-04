public class Prime
{
	int n;
	int primecheck()
	{
		int f=0;
		for(int i=1;i<=n;i++)
		{
			if(n%i==0)
				f++;
		}
		return f;
	}
	public static void main(String args[])
	{
		Prime obj = new Prime();
		obj.n=5;
		if(obj.primecheck()==2)
			System.out.println("Prime Number");
		else
			System.out.println("Not a Prime Number");
	}
}
		
		
