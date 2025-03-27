
public class Money {
	private int value;
	private int notes[];
	private int notenames[];
	// 0 : 500, 1: 200, 2: 100, 3: 50, 4: 20, 5: 10, 6: 5, 7: 2, 8: 1

	public Money()
	{
		
		value=0;
		notes=new int[9];
		notenames=new int[] {500,200,100,50,20,10,5,2,1};
	}
	public Money(int val)
	{
		value=val;
		notes=new int[9];
		notenames=new int[] {500,200,100,50,20,10,5,2,1};
		updatedenomination(value);
	}
	private void updatedenomination(int value)
	{
		int d;
		int t=value;
		for(int i=0;i<notes.length;i++)
			notes[i]=0;
		for(int i=0;i<notenames.length;i++)
		{
			d=notenames[i];
			if(t >= d)
			{
				notes[i]=(t/d);
				t=t%d;
			}
		}
		notes[8]=t;

	}
	public void setValue(int value)
	{
		//this refers to the current object
		this.value=value;
		updatedenomination(this.value);
	}
	public int getValue()
	{
		return this.value;
	}
	
	public void addMoney(int val)
	{
		this.value+=val;
		updatedenomination(value);
	}
	public void getMoney(int val)
	{
		this.value-=val;
		updatedenomination(value);
	}
	
	public void showMoney()
	{
		System.out.println("The value available is :  "+this.value);
		for(int i=0;i<notes.length;i++)
		{
			System.out.print(notenames[i]+ ":");
			System.out.print(notes[i]+", ");
		}
		System.out.println();
	}

}
