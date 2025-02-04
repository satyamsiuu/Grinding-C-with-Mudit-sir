public class Fibonacci
{
	int n;
	void fib()
	{
		int a=0,b=1,c;
		for(int i=1;i<=n;i++)
		{
			System.out.print(a+" ");
			c = a+b;
			a = b;
			b = c;
		}
		System.out.println();
	}
	public static void main(String args[])
	{
		Fibonacci obj = new Fibonacci();
		obj.n = 10;
		if(obj.n>0)
			obj.fib();
		else
			System.out.println("Invalid Input");
	}
}
