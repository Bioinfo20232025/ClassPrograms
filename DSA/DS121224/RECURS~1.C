#include <stdio.h>
int show_message(int i)
{
    int rv;

    if(i < 5){
    rv=i + show_message(i+1);
    return rv;
    }
    else
    return i;
}
void main()
{
    int i=1,sum=0;
    sum=show_message(i);
    printf("Sum : %d",sum);}
