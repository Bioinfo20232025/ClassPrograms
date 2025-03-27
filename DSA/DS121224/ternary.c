#include <stdio.h>
int pos(int x)
{
    return x >=0;
}
void main()
{
  int x=5;
  printf("Enter a number : ");
  scanf("%d",&x);
  printf("%s",(pos(x))?"positive\n":"negative\n");
}
