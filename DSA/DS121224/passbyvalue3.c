#include <stdio.h>
void add5(int a,char b,float c)
{
    *a+=5;
    printf("%d\n",*a);
}

void main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("Before : %d\n",x);
    add5(x+y,x+z,z);
    printf("After : %d\n",x);
}
