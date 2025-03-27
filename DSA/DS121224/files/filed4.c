#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp1, *fp2;
    char ch;
    char str[81];
    if((fp1=fopen("one.txt","r"))==NULL)
    {
        printf("The source file does not exist\n");
        exit(1);
    }
    if((fp2=fopen("out.txt","r"))!=NULL)
    {
        printf("The destination file exists\nDo you want to overwrite (y/n) :");
        scanf(" %c",&ch);
        if(ch == 'y')
        {
            fclose(fp2);
            fp2=fopen("out.txt","w");
        }
        else
           exit(1);
    }
    while((fgets(str,80,fp1))!=NULL)
    {
        fputs(str, fp2);
    }
    fclose(fp1);
    fclose(fp2);
}
