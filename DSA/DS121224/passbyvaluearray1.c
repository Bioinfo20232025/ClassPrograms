#include <stdio.h>
#define SIZE 5
int product(int n[],int size)
{
    int p=1;
    for(int i=0;i<size;i++)
    {
        if(n[i] > 10)
        {
            p*=n[i];
        }

    }
    return p;

}
void main()
{
    int n[SIZE];
    int i, p;
    printf("Enter 5 numbers : ");
    for(i=0;i<SIZE;i++)
    {
    scanf("%d",&n[i]);
    }

    p=product(n,SIZE);
    printf("The product is %d\n",p);

}
