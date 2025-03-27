#include <stdio.h>
void input_array(int *arr, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("Enter a number : ");
        scanf("%d",&arr[i]);
    }

}
void print_array(int arr[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
getfirstlast(int *arr,int size,int *firstlast, int size1)
{
    //static int firstlast[2];
    printf("I am here 1\n");
    firstlast[0]=arr[0];
    firstlast[1]=arr[size-1];
    printf("I am here 2\n");
    print_array(firstlast,2);
    return firstlast;

}
void main()
{
    int arr[10],*p;
    int firstlast[2];
    input_array(arr,10);
    print_array(arr,10);
    getfirstlast(arr,10,firstlast,2);
    printf("I am back\n");
    print_array(firstlast,2);
}
