#include <stdio.h>
#include <stdlib.h>
int stringcmp(char *s1, char *s2)
{
    while(*s1 != '\0' && *s2 != '\0')
    {
        if(*s1 != *s2)
            return 0;
        s1++;
        s2++;
    }
    return 1;

}
int strlen(char *s)
{
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}
void main()
{
    char str[101];
    FILE *fp;
    int x;
    if((fp=fopen("datafile.txt","a"))== NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }
    printf("Enter file contents (type end to stop) : \n");
    do
    {

        scanf(" %[^\n]",str);
        strcat(str,"\n\0");
        if(stringcmp(str, "end") != 1)
            fputs(str, fp);

    }while(stringcmp(str,"end") != 1);

    fclose(fp);
}
