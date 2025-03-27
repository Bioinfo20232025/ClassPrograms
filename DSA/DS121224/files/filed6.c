#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int rno;
    char name[21];
}student;
void main()
{
    FILE *fp;
    student rec;
    if((fp=fopen("studstruc.txt","w"))== NULL)
    {
        printf("Cannot create file\n");
        exit(1);
    }
    while(1)
    {
        printf("Enter the rno : ");
        scanf(" %d",&rec.rno);
        if(rec.rno == -1)
            break;
        printf("Enter the name : ");
        scanf(" %s",rec.name);
        fwrite(&rec,sizeof(rec),1,fp);
    }
    fclose(fp);

    fp=fopen("studstruc.txt","r");
    while((fread(&rec,sizeof(student),1,fp))==1)
    {
            printf("%d %s\n",rec.rno, rec.name);
    }

    fclose(fp);
}
