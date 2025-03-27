
public class UsingRectangle {

	public static void main(String[] args) {
		Rectangle r1, r2, r3;
		r1=new Rectangle();
		r2=new Rectangle();
		r1.setRectangle(5, 2);
		System.out.println("Showing r1");
		r1.showRectangle();
		System.out.println("Showing r2");
		r2.showRectangle();
		r3=new Rectangle();
		r3.setRectangle(r1.getLength(),r1.getBreadth());
		System.out.println("Showing r3");
		r3.showRectangle();
		r1.setRectangle(6,3);
		r1.showRectangle();
		r3.showRectangle();
		

	}

}
