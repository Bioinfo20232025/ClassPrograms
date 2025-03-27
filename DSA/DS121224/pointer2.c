#include <stdio.h>
void main()
{
    int *p1, *p2;
    int a, b;

    a=3;
    b=5;
    p1=&b;
    p2=&a;

    *p1*=*p2-*p1;

    printf("p1 = %d ",*p1);
    printf("p2 = %d ",*p2);
}
