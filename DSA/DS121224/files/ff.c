#include <stdio.h>
#include <stdlib.h>
void main()
{
 FILE *fp;
 char ch;
 if (fp=fopen("fff.txt","w")==NULL){
  printf("file cannot be open");
  exit(1);
 }
 ch=getc(stdin);
 while (ch!=EOF){
 putc=(ch,fp);
 }
 fclose(fp);
}
