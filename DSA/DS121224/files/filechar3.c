#include <stdio.h>
#include <stdlib.h>
void main()
{
    char fname[21];
    FILE *outfile;
    char ch;
    int cnt=0;
    printf("Enter the file name : ");
    scanf("%s",fname);

    if((outfile=fopen(fname,"r"))!=NULL)
    {
        printf("The file exists\n");
        fclose(outfile);
        exit(1);
    }
    if((outfile=fopen(fname,"w"))==NULL)
    {
        printf("The cannot be opened\n");
        exit(1);
    }

    while((ch=getchar())!= EOF)
    {
        fputc(ch,outfile);

    }
    fclose(outfile);
    outfile=fopen(fname,"r");

    while((ch=fgetc(outfile))!= EOF)
    {
        fputc(ch, stdout);
        cnt++;
    }
    printf("The size of the file is : %d\n",cnt);

    fclose(outfile);
}
