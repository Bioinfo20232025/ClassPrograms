#include <stdio.h>
void greet(char *); //function declaration


void main()
{
    char str[21];
    printf("Enter your name : ");
    scanf(" %s",str);
     greet(str); // function call
}

void greet(char *s)   // function definition
{
    printf("Welcome %s\n",s);


}
