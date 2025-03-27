#include <stdio.h>
#include <conio.h>
//function definition
void sum1() //called
{
    int a,b;
    printf("Enter 2 numbers : ");
    scanf(" %d%d",&a, &b);
    printf("%d+%d=%d\n",a,b,(a+b));
}
void sum2(int x, int y)
{
    printf("%d+%d=%d\n",x,y,(x+y));
}
int sum3()
{
    int a, b;
    printf("Enter 2 numbers : ");
    scanf(" %d%d",&a, &b);
    return a+b;
}
int sum4(int x, int y)
{
	return x+y;
}
void main()  //calling
{
    int a, b;
      int c;
    clrscr();
    printf("Enter 2 numbers : ");
    scanf(" %d%d",&a, &b);

//    sum1();
//    sum2(a, b);
//      c=sum3();
      c=sum4(a,b);
      printf("The sum is %d\n",c);

      getch();
}