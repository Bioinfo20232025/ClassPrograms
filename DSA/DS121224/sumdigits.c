#include <stdio.h>
int sumdigits(int num)
{
    int s=0,d;
    while(num != 0)
    {
        d=num%10;
        s+=d;
        num/=10;
    }
    return s;
}
void main()
{
    int n,sum;
    printf("Enter a number : ");
    scanf(" %d",&n);
    sum=sumdigits(n);
    printf("The total sum of digits is %d",sum);

}
