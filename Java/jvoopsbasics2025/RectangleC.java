
public class RectangleC {
	private int length;
	private int breadth;
	
	
	public 
	
	
	RectangleC() // A default constructor is without any parameters
	{
		System.out.println("RectangleC : Default Constructor");
		length=7;
		breadth=5;
	}
	
	// A class can have any number of overloaded constructors 
	public RectangleC(int l, int b) // An overloaded constructor is with parameters
	{
		System.out.println("RectangleC : Overloaded Constructor");
		length=l;
		breadth=b;
	}
	
	public void showRectangle()
	{
		System.out.println("Length : "+ length);
		System.out.println("Breadth : "+ breadth);
	}
	
	public static void main(String[] args)
	{
		RectangleC c=new RectangleC();
	}
}
