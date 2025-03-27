#include <stdio.h>
int product(int n1, int n2, int n3, int n4, int n5)
{
    int p=1;
    if(n1 > 10)
        p*=n1;
    if(n2> 10)
        p*=n2;
    if(n3> 10)
        p*=n3;
    if(n4> 10)
        p*=n4;
    if(n5 > 10)
        p*=n5;


}
void main()
{
    int n1, n2, n3, n4, n5;
    printf("Enter a number : ");
    scanf("%d",&n1);
    printf("Enter a number : ");
    scanf("%d",&n2);
    printf("Enter a number : ");
    scanf("%d",&n3);
    printf("Enter a number : ");
    scanf("%d",&n4);
    printf("Enter a number : ");
    scanf("%d",&n5);
}
