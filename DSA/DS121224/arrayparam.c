#include <stdio.h>
void input_array(int arr[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("Enter an array number : ");
        scanf(" %d",&arr[i]);
    }

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
void add_array(int *arr,int size, int addvalue)
{
    int i;
    for(i=0;i<size;i++,arr++)
    {
   //     arr[i]+=addvalue;
        *arr+=addvalue;
    }
}
int input_number()
{
    int x;
    printf("Enter the addvalue");
    scanf(" %d",&x);
    return x;

}
void main()
{
    int arr[10], addvalue, i;

    input_array(arr,10);
    addvalue=input_number();
    print_array(arr,10);
    add_array(arr,10,addvalue);
    print_array(arr,10);


}
