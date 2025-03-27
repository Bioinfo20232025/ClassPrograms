#include <stdio.h>
#include <conio.h>
void swapv(int a, int b) //called
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("In swap : a=%d, b=%d\n",a,b);
}
void swapp(int *a, int *b) //called
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("In swap : a=%d, b=%d\n",*a,*b);
}

void main() //calling
{
    int a, b;
    printf("Enter 2 nos : ");
    scanf(" %d%d",&a,&b);
    printf("Before : a=%d, b=%d\n",a,b);
    //swapv(a,b);
    swapp(&a, &b);
    printf("After : a=%d, b=%d\n",a,b);
    getch();
}
