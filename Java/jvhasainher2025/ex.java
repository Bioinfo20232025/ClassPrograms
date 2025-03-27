
public class ex {

	public static void main(String[] args) {
		int value=1893;
		int notes[]=new int[9];
		
		int names[]={500,200,100,50,20,10,5,2,1};
		
		int d;
		for(int i=0;i<names.length;i++)
		{
			d=names[i];
			if(value > d)
			{
				notes[i]+=(value/d);
				value=value%d;
			}
		}
		notes[8]=value;
		
		for(int i=0;i<notes.length;i++)
		{
			System.out.print(names[i]+ " : ");
			System.out.println(notes[i]);
		}

	}

}
