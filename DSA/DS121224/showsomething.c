#include <stdio.h>
int x=10;
void main()
{
    int a=10;
    for(int i=0;i<10;i=increment())
        printf("%d ",i);
}

int increment()
{
   static int a=0;
    a++;
    return a;

}
