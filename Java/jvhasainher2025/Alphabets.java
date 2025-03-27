
public class Alphabets {
	ClassA alphaA;
	ClassB alphaB;
	
	public Alphabets() // Default Constructor
	{
		alphaA=new ClassA();
		alphaB=new ClassB();
	}
	
	public Alphabets(int x) //Overloaded Constructor
	{
		alphaA=new ClassA();
		alphaA.setA(x);
		alphaB=new ClassB(x);		
	}
	public Alphabets(int x, int y) //Overloaded Constructor
	{
		alphaA=new ClassA();
		alphaA.setA(x);
		alphaB=new ClassB(y);
	}
	
	public void showAlpha()
	{
		alphaA.showA();
		alphaB.showB();
		
	}

}
