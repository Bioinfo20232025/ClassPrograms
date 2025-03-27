#include <stdio.h>
void getcputc()
{
    char ch;
    puts("Enter a char : ");
    ch=getc(stdin);

    putc(ch, stdout);
}
void main()
{
    char ch;
//    puts("Enter a character : ");
//    ch=getchar();
//    fflush(stdin);
//    putchar(ch);
//    ch=getc(stdin);
//    fflush(stdin);
//    putchar(ch);
//    ch=getchar();
//    putchar(ch);

    printf("%d",ch=getchar());
}
