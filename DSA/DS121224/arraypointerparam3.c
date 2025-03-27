#include <stdio.h>
void main()
{
    int arr[10], result[3];
    int i;
    printf("Enter 10 values : ");
    for(i=0;i<10;i++)
    {
        scanf(" %d",&arr[i]);
    }

    getvalues(arr,10,result, 3);

        printf("Min :  %d, Max :  %d, Average :  %d\n",result[0],result[1],result[2]);

}

void getvalues(int *arr, int as, int *r, int sr)
{
    int mn, mx,av,sm;
    mn=mx=arr[0];
    av=sm=0;
    int i;
    for(i=0;i<as;i++)
    {
        if(arr[i] > mx)
            mx = arr[i];
        if(arr[i] < mn)
            mn = arr[i];
        sm+=arr[i];
    }

    av=sm/i;
    r[0]=mn;r[1]=mx;r[2]=av;
    return;
}
















