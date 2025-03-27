#include <stdio.h>
#include <stdlib.h>
void main()
{
    int rno,x;

    char name[21], course[11], grade;
    float avg;
    FILE *fp;
    if((fp=fopen("students.txt","w"))==NULL)
    {
        printf("Cannot create file\n");
        exit(1);
    }

    while(1)
    {
    printf("Enter the roll no : ");
    scanf("%d",&rno);
    if(rno == -1)
        break;
    printf("Enter the name : ");
    scanf(" %s",name);
    printf("Enter the course : ");
    scanf(" %s",course);
    printf("Enter the average marks : ");
    scanf(" %f",&avg);
    printf("Enter the grade : ");
    scanf(" %c",&grade);

    fprintf(fp,"%d %s %s %.2f %c\n",rno, name, course, avg, grade);
    }
    fclose(fp);
    fp=fopen("students.txt","r");
    while((fscanf(fp,"%d %s %s %f %c",&rno,name, course,&avg, &grade))!= EOF)
    {
            fprintf(stdout,"%d %s %s %.2f %c\n",rno, name, course, avg, grade);
    }

    fclose(fp);
}
