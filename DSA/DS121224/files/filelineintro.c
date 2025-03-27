#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char fname[21]="file1.txt",myline[81];
    if((fp=fopen(fname,"r"))== NULL)
    {
        printf("File does not exist\n");
        exit(1);
    }



    while((fgets(myline,90,fp)) != NULL)
    {
        printf("%s\n",myline);
    }

    fclose(fp);

}





