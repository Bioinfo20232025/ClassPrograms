#include <stdio.h>
// Pointer variable
void main()
{
    int *ptr=NULL;
    int a=25;
    ptr=&a;
    printf("Address of a in pointer : %p\n",ptr);
    printf("Value in the address with pointer is %d\n",*ptr);
    printf("Address of a using &a : %p\n",&a);
    printf("The value in a is : %d\n",a);
}
