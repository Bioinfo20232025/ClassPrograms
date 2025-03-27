#include <stdio.h>
#define pf printf
#define sf scanf
void show(int a, int b)
{
    a+=10;
    b+=5;
    pf("%d %d\n",a,b);

}
void main()
{
    int n1, n2;
    pf("Enter a number : ");
    sf("%d",&n1);
    pf("Enter a number : ");
    sf("%d",&n2);
    pf("%d %d\n",n1,n2);
    show(n1, n2);
    pf("%d %d\n",n1,n2);
}
