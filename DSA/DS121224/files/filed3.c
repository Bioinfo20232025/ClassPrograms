#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char str[81];
    if((fp=fopen("one.txt","r")) == NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }

    while((fgets(str,80,fp)) != NULL)
    {
        puts(str);
        //fputs(str,stdout);
    }

    fclose(fp);

}
