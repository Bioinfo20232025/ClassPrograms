
public class Purse {
	Money m;
	
	public Purse()
	{
		m=new Money(1500);
	}
	public Purse(int money)
	{
		m=new Money(money);
	}
	public void setMoney(int value)
	{
		m.addMoney(value);
		m.showMoney();
	}
	
	public void getMoney(int value)
	{
		m.getMoney(value);
		m.showMoney();
	}
}
