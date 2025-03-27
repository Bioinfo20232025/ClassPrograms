#include <stdio.h>
int larger(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

void main()
{
    int a, b;
    printf("Enter a number : ");
    scanf(" %d",&a);
    printf("Enter a number : ");
    scanf(" %d",&b);

    printf("The larger number is %d\n",larger(a, b));
}
