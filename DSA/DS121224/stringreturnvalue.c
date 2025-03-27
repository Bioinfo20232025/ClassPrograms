#include <stdio.h>
char *startfrom(char *, int);
void main()
{
    char str[21];
    int ch;
    char *ptr;
    printf("Enter a string : ");
    scanf(" %s",str);
    printf("Enter the number of chars from start : ");
    scanf(" %d",&ch);
    ptr=startfrom(str,ch);
    printf("The %d chars at beginning are %s in %s\n",ch,ptr,str);
}
char *startfrom(char *str, int chars)
{
    static char chrs[21];
    int i=0;
    for(i=0;*str != '\0' && i < chars;i++,str++)
    {
        chrs[i]=*str;

    }
    chrs[i]='\0';
    return chrs;
}
