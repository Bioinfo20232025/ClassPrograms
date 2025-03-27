#include <stdio.h>
void main()
{
    FILE *fp;
    char c;
    fp=fopen("file1.txt","w");
    if(fp == NULL)
    {
        printf("Cannot open the file\n");
        exit(0);
    }
    c=getchar();

    putc(c, fp);

    fclose(fp);
}
