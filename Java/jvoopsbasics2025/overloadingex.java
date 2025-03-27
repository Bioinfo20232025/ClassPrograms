
public class overloadingex {

	// The return value is not a part of the signature
	// Changing only the return value will not make an overloaded method
	public void add(int a, int b)
	{
		System.out.println(a+" + "+b+" =  "+(a+b));
		System.out.printf("i,i %d + %d = %d\n",a,b,(a+b));
	}
	public void add(int x, int y, int z)
	{
		System.out.printf("i,i,i %d + %d + %d=%d\n", x,y,z,(x + y + z));
	}
	public void add(byte a, byte b)
	{
		System.out.printf("b,b %d + %d = %d\n",a,b,(a+b));
	}
	public void add(byte a, short b)
	{
		System.out.printf("b,s %d + %d = %d\n",a,b,(a+b));
	}
	
	public void add(short a, byte b)
	{
		System.out.printf("s, b %d + %d = %d\n",a,b,(a+b));
	}
	public void add(float a, double b)
	{
		System.out.printf("f, d %f + %f = %f\n",a,b,(a+b));
	}
	public static void main(String[] args)
	{
		overloadingex obj=new overloadingex();
		byte b1, b2;
		b1=4;
		b2=5;
		int x,y,z;
		short a,b;
		a=15;
		b=17;
		x=y=z=5;
		float f=12.45f;
		long n=12L;
		char ch='a';
		obj.add(ch, ch);
//		obj.add("12", "21");
		
		
	}
	
}
