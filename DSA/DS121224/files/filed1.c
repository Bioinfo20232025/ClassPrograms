#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp,*ofp;
    char ch;
    if((fp=fopen("one.txt","w")) == NULL)
    {
        printf("Cannot open the file to write \n");
        exit(1); //terminate the program
    }

    while((ch=getc(stdin)) != EOF)
          {
                fputc(ch, fp);
          }

    fclose(fp);
    if((fp=fopen("one.txt","r")) == NULL)
    {
        printf("Cannot open the file to write \n");
        exit(1); //terminate the program
    }
    printf("The contents written to the file are : ");
    while((ch=fgetc(fp)) != EOF)
    {
        putc(ch, stdout);
    }
    fclose(fp);
    if((fp=fopen("one.txt","r")) == NULL)
    {
        printf("Cannot open the file to write \n");
        exit(1); //terminate the program
    }
    if((ofp=fopen("out.txt","w")) == NULL)
    {
        printf("Cannot open the file to write \n");
        exit(1); //terminate the program
    }

    while((ch=fgetc(fp))!= EOF)
    {
        fputc(ch, ofp);
    }

    fclose(fp);
    fclose(ofp);

}
