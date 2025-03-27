#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char h[100];
    char seq[81];
    char sseq[1000];
    if((fp=fopen("file1.fasta", "r"))==NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }

    fgets(h,99,fp);
    while((fgets(seq,80,fp))!= NULL)
    {
        seq[strlen(seq)-1]='\0';
        strcat(sseq,seq);
        printf("%s--> %d\n",seq,strlen(seq));
    }

    fclose(fp);
    printf("\n\n\n\nSingle line sequence is :\n");
    printf("%s--->%d\n",sseq,strlen(sseq));



}
