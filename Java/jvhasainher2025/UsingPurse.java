import java.util.Scanner;
public class UsingPurse {
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		Purse p=new Purse();
		int m;
		System.out.print("Enter the amount to add : ");
		m=sc.nextInt();
		p.setMoney(m);
		
		System.out.print("Enter the amount to get : ");
		m=sc.nextInt();
		p.getMoney(m);
	}
}
