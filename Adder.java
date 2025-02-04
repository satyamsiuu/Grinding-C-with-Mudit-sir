public class Adder
{
	int a,b;
	void add()
	{
		a=11;b=9;
		System.out.println(a+b);
	}
	public static void main(String args[])
	{
		Adder obj = new Adder();
		obj.add();
	}
}
