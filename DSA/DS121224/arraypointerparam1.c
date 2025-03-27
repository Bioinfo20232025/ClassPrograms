#include <stdio.h>
int ab;
void input_array(int *arr, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("Enter an array number : ");
        scanf(" %d",&arr[i]);
    }
}
int match(int *arr1, int s1, int *arr2, int s2)
{
    int i,m;
    for(i=0,m=0;i< s1 && i < s2;i++,arr1++, arr2++)
    {
        if(*arr1 == *arr2)
            m++;
    }
    return m;
}
void print_array(int arr[],int size)
{
    int i;
   for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void main()
{

    int arr1[10],arr2[10];
    int m;
    input_array(arr1,10);
    input_array(arr2,10);
    m=match(arr1, 10, arr2, 10);
    print_array(arr1,10);
    print_array(arr2,10);
    printf("The number of matches are : %d\n",m);

}

