#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *in, *out;
    char infilename[21], outfilename[21];
    char line[101];
    printf("Enter the source file : ");
    scanf(" %s",infilename);
    printf("Enter the destination file : ");
    scanf(" %s",outfilename);
    if((in=fopen(infilename,"r"))==NULL)
    {
        printf("File not found : %s\n",infilename);
        exit(1);
    }

    if((out=fopen(outfilename,"w"))== NULL)
    {
        printf("Cannot open File  : %s for writing\n",infilename);
        exit(1);
    }

    while((fgets(line, 100,in))!= NULL)
    {
        fputs(line,out);
    }
    fclose(in);
    fclose(out);
}
