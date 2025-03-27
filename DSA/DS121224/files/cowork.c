#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char name[21];
    int linelen=0;
    int lineno=0;
    char ch;
    printf("Enter the filename : ");
    scanf(" %s",name);
    fp=fopen(name,"r");
    if(fp==NULL)
    {
        printf("File doesn't exist.");
        exit(1);
    }
    int lz=0,clz=0,ln=0,lln=0;
    while((ch=fgetc(fp))!=EOF)
        {

        if(ch=='\n')
        {
            ln++;
            printf("\n%d\n",ln);
            if(clz > lz)
            {
                lz=clz;
                lln=ln;
            }
            clz=0;
        }
        clz++;
    }
ln++;
            printf("\n%d\n",ln);
            if(clz > lz)
            {
                lz=clz;
                lln=ln;
            }
    printf("The longest line size is %d and line number is %d\n",lz, lln);
}
