#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    int rno, age;
    char name[21];
    char ans;
    if((fp=fopen("student.txt","w"))== NULL)
    {
        printf("Cannot create file\n");
        exit(1);
    }

    do
    {
        printf("Enter the roll no : ");
        scanf(" %d",&rno);
        printf("Enter the name    : ");
        scanf(" %s",name);
        printf("Enter the age     : ");
        scanf(" %d",&age);
        fprintf(fp,"%d %s %d\n",rno, name, age);
        printf("Continue y/n :");
        scanf(" %c",&ans);
    }while(ans != 'n' &&  ans !='N');

    fclose(fp);
    printf("Reading from file\n");
    fp=fopen("student.txt","r");
    while((fscanf(fp,"%d%s%d",&rno, name, &age)) != EOF)
    {

//        fprintf(stdout,"%d %s %d\n",rno, name, age);
        printf("%d %s %d\n",rno, name, age);
    }

    fclose(fp);


}
