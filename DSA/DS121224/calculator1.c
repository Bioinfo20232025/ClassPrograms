#include <stdio.h>
addition()
{
    int n1, n2, n3;
    printf("Enter a number : ");
    scanf(" %d",&n1);

    printf("Enter a number : ");
    scanf(" %d",&n2);

    n3=n1+n2;
    printf("%d + %d = %d\n",n1,n2,n3);

}
subtraction()
{
    int n1, n2, n3;
    printf("Enter a number : ");
    scanf(" %d",&n1);

    printf("Enter a number : ");
    scanf(" %d",&n2);

    n3=n1+n2;
    printf("%d - %d = %d\n",n1,n2,n3);

}
multiplication()
{
    int n1, n2, n3;
    printf("Enter a number : ");
    scanf(" %d",&n1);

    printf("Enter a number : ");
    scanf(" %d",&n2);

    n3=n1*n2;
    printf("%d * %d = %d\n",n1, n2,n3);

}
division()
{
    int n1, n2, n3;
    printf("Enter a number : ");
    scanf(" %d",&n1);

    printf("Enter a number : ");
    scanf(" %d",&n2);

    n3=n1/n2;
    printf("%d / %d = %d\n",n1,n2,n3);

}
void main()
{
    char op;
    do
    {
    printf("Enter the operation (+ - * / ) : ");
    scanf(" %c",&op);
    }while(!(op == '+' || op == '-' || op == '*' || op == '/' || op == '.' ));
    //}while(op != '+' && op != '-' && op != '*' && op != '/' );

    switch(op)
    {
    case '+':
        addition();
        break;
    case '-':
        subtraction();
        break;
    case '*':
        multiplication();
        break;
    case '/':
        division();
        break;


    }
    if(op == '.')
        break;
    printf("%d %c %d = %d\n",n1,op, n2,n3);

   } while(1);



}
