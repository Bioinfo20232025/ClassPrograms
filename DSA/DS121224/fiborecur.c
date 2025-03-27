#include <stdio.h>
int fibo(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
    {
        return 1;
    }
    else
        return fibo(n-1) + fibo(n-2);
}
void main()
{
    int i,n,x=0;
    printf("Enter the number of fibo n : ");
    scanf("%d",&n);
    for(i=0;i < n;i++)
    {
        x=fibo(i);
        //if(x < n)
        printf("%d : %d\n",i,x);
       // else
       //     break;
    }
}
