#include <stdio.h>
#include <stdlib.h>
//#define toupper(a)    (a>=97 && a<= 122)?a-32:a
char toupper(char a)
{
    return (a>=97 && a<= 122)?a-32:a;
}
void main()
{
    char ch;
    FILE *fp1=fopen("file1.txt","r");
    FILE *fp2=fopen("file2.txt","w");
    if(fp1 ==  NULL)
        exit(1);
        ch=fgetc(fp1);
    while(ch != EOF)
    {

          fputc(toupper(ch),fp2);

        ch=fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
}
