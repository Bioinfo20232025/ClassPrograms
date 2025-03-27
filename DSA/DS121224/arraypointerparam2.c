#include <stdio.h>
int *getvalues(int *arr, int size, int gn)
{
    static int rarr[10];
    int pos=0,i;
    for(i=0,pos=1;i<size;i++)
    {
        if(arr[i] >= gn)
        {
            rarr[pos]=arr[i];
            pos++;
        }
    }
    rarr[0]=pos;
    return rarr;
}

void main()
{
    int arr[10], *p;
    int gn;
    printf("Enter 10 values : ");
    for(int i=0;i<10;i++)
    {
        printf("Enter a number : ");
        scanf(" %d",&arr[i]);
    }
    printf("Enter the given number : ");
    scanf(" %d",&gn);
    p=getvalues(arr,10,gn);
    printf("%d %d\n",p[0],p[1]);
    for(int i=1;i<p[0];i++)
    {
        printf(" %d",p[i]);
    }
}

