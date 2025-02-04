public class Factorial
{
	int n;
	int fac()
	{
		if(n==0||n==1)
			return 1;
		return (n--)*fac();
	}
	public static void main(String args[])
	{
		Factorial obj = new Factorial();
		obj.n=6;
		if(obj.n>=0)
			System.out.println(obj.fac());
		else
			System.out.println("Invalid Input");
	}
}
		
		
