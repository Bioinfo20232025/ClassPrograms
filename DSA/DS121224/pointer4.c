#include <stdio.h>
#define size 10
void main()
{
    int *p;

    int arr[size]={1,2,3,4,5,6,7,8,9,10};
    printf("Enter 10 nos : ");
    for(p=arr;p < arr+size;p++)
    {
        scanf("%d",p);
    }
    for(p=arr;p < arr+size;p++)
    {
        printf("%d%c ",*p,(p == arr+(size-1))?'.':',');
    }
    printf("\n");



}
