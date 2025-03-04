import java.util.*;
interface CreditCardPayment
{
	boolean validateCard(String cardNumber);
	void processPayment(double amount);
}
interface WalletPayment
{
	double checkBalance();
	void processPayment(double amount);
}

class DigitalPayment implements CreditCardPayment,WalletPayment
{
	String name,cardNumber,ID;
	double balance;
	DigitalPayment(String name,String cardNumber,double balance,String id)
	{
		ID = id;
		this.name = name;
		this.cardNumber = cardNumber;
		this.balance = balance;	
	}
	
	boolean checkID(String id)
	{
		if(ID.equals(id))	
			return true;
		else
			return false;
	}
	double checkBalance()
	{
		return balance;
	}
	
	void processPayment(double amount)
	{
		balance-=amount;
		System.out.println("Payment Complete!");
	}
	
	boolean validateCard(String cardNumber)
	{
		if(this.cardNumber.equals(cardNumber))
			return true;
		else 
			return false;
	}
}
		
	
public class p1
{
	static int indexFinder(Digital Payment acc[],int n,String id)
	{
		int index = -1;
		for(int i=0;i<n;i++)
		{
			if(a[i].checkID(id))
			{
				index = i;
				break;
			}
		}
		return index;
	}	
		
	public static void main(String args[])
	{
		Random rand = new Random();
		System.out.print("Enter number of accounts: ");
		int n = sc.nextInt();
		DigitalPayment acc[]= new DigitalPayment[n];
		System.out.println("Enter details to make accounts:-);
		for(int i=0;i<n;i++)
		{	
			System.out.print("Name: ");
			String name = sc.nextLine();
			System.out.print("Balance: ");
			double balance = sc.nextDouble();
			System.out.print("Username for UPI ID: ");
			String id = sc.next();
			id = id.concat(@ybl);
			System.out.println("Generated UPI ID: "+id);
			int num = rand.nextInt(n+100)+ 176348267;
			String cardNumber = String.valueOf(num);
			System.out.println("Generated Credit Card Number: "+cardNumber);
			acc[i] = new DigitalPayment(name,cardNumber,balance,id);
			System.out.println("Successfully Created an Account!");
		}
		
	}
}