#include <stdio.h>
void main()
{
    int n1, n2, n3;
    char op;
    do
    {


    printf("Enter a number : ");
    scanf(" %d",&n1);

    printf("Enter a number : ");
    scanf(" %d",&n2);
    do
    {
    printf("Enter the operation (+ - * / ) : ");
    scanf(" %c",&op);
    }while(!(op == '+' || op == '-' || op == '*' || op == '/' || op == '.' ));
    //}while(op != '+' && op != '-' && op != '*' && op != '/' );

    switch(op)
    {
    case '+':
        n3=n1+n2;
        break;
    case '-':
        n3=n1-n2;
        break;
    case '*':
        n3=n1*n2;
        break;
    case '/':
        n3=n1/n2;
        break;


    }
    if(op == '.')
        break;
    printf("%d %c %d = %d\n",n1,op, n2,n3);

 }   while(1);

}
