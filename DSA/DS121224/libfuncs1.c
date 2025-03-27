#include <stdio.h>
int number(char n[])
{
    int i, num,d, b=1;
    for(i=0;n[i]!='\0';i++);

    for(i--,num=0;i>=0;i--)
    {
        d=n[i]-'0';
        num=num+(b*d);
        b=b*10;
    }
    printf("number = %d\n",num);
    return num;

}
int number1(char n[])
{
    int i, num,d, b=1;
    for(i=0,num=0;n[i] != '\0';i++)
    {
        d=n[i] - '0';
        num=num * 10 + d;
    }
-    printf("number = %d\n",num);

    return num;
}


void main()
{
    char ch[5];
    int n;
    printf("Enter a char : ");
    scanf(" %s",&ch);
    printf("%s\n",ch);
    n=number1(ch);
    printf("The number is %d\n",n);


}
