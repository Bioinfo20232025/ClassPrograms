#include <stdio.h>
#define size 10
void main()
{
    int *p;
    int arr[size];
    int i;
    printf("Enter %d nos : ",size);
    //for(p=arr;p <= (arr+(size-1));p++)
    for(p=arr,i=0;i<size;p++,i++)
    {
    scanf("%d",p);
    }

    for(p=arr,i=0;i<size;i++,p++)
    {
        *p+=5;
        printf("%d ",*p);
    }

}
