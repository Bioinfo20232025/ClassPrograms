
public class Rectangle {
	private int length;
	private int breadth;
	
	public void setLength(int l) {
		length=l;
	}
	public int getLength() {
		return length;
	}
	public void getBreadth(int b) {
		breadth=b;
	}
	public int getBreadth() {
		return breadth;
	}
	public void setRectangle(int len, int bread)
   {
     length =len;
     breadth =bread;
   }

	public void setRectangle(int len)
	   {
	     length =len;
	     breadth =len;
	   }
	public int getArea()
	{
		return length * breadth;
	}
	
	public int getPerimeter()
	{
		return 2 * (length + breadth);
	}
	
	public void showRectangle()
	{
		System.out.println("Length : "+ length);
		System.out.println("Breadth : "+ breadth);
	}

}