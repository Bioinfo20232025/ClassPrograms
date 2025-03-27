#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *f;
    char str[81];
    f=fopen("file1.txt", "w");
    if(f == NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }
    puts("Enter a string : ");
    gets(str);

    fputs(str,f);
    fputs(str,f);

    fclose(f);


}
