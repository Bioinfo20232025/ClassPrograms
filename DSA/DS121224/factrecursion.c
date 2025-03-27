#include <stdio.h>
int fact(int n)
{
    if (n==1)
        return n;
    else
        return n * fact(n-1);
}
void main()
{
    int i,f;
    printf("Enter the number : ");
    scanf(" %d",&i);
    f=fact(i);
    printf("Factorial of %d is %d\n",i,f);
}
