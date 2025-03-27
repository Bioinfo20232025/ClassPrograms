#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    FILE *fp1, *fp2;
    char str[81];
    int c;
    if((fp1=fopen("one.txt","w"))==NULL)
    {

    }
	puts("1. Enter a string : ");
	gets(str);
	c=strcmp(str,"end");
	while(c != 0)
	{
	    fputs(str,fp1);
	    puts("2. Enter a string : ");
	    gets(str);
	    c=strcmp(str,"end");

        }


    fclose(fp1);

    //if((fp2=fopen("out.txt","w"))==NULL)
    //{

    //}
}
