#include <stdio.h>
void swap(int a, int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("inside swap: %d %d\n",a,b);
}
void swap1(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("inside swap: %d %d\n",a,b);
}
void main()
{
    int a=5, b=7;
    printf("before swap: %d %d\n",a,b);
    swap1(&a, &b);
    printf("after swap: %d %d\n",a,b);
}
