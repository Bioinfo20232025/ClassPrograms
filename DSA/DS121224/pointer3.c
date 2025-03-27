#include <stdio.h>
#define cnt 5
void main()
{
    int a[cnt];
    int i;
    printf("Enter a number : ");
    for(i=0;i<cnt;i++)
    {
        //scanf(" %d",&a[i]);
        scanf(" %d",(a+i));
    }

    for(i=0;i<cnt;i++)
    {
        printf("%d %d\n",*(a+i), (a+i));
    }

}
