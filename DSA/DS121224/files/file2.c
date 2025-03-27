#include <stdio.h>
void main()
{
    FILE *fp;

    fp=fopen("file2.txt","w");
    char ch;
    printf("Enter chars to enter in file :  ");
    do
    {
        ch=getchar(); // char is given to the program from the KB

        fputc(ch,fp); // char is written to the file opened w mode

    }while(ch != '.');
    fclose(fp);
}
