#include <stdio.h>
typedef struct {
    int dd;
    int mm;
    int yy;
}date;
typedef struct
{
    int rno;
    char name[21];
    date dob;
}student;

void main()
{
    student r[5];
    student *pt;
    date dt;
    int i;
    printf("%d\n",sizeof(student));
    for(pt=r,i=0;i<5;i++,pt++)
    {
        printf("Enter the rno : ");
        scanf("%d",&pt->rno);
        printf("Enter the name : ");
        scanf(" %s",pt->name);
        printf("Enter the date of birth : ");
        printf("day :");
        scanf(" %d",&pt->dob.dd);
        printf("month :");
        scanf(" %d",&pt->dob.mm);
        printf("year :");
        scanf(" %d",&pt->dob.yy);

    }
printf("\n\n\n\n");
    for(pt=r,i=0;i<5;i++,pt++)
    {
        printf("%d)   %20s  %d/%d/%d\n",pt->rno,pt->name,pt->dob.dd,pt->dob.mm, pt->dob.yy);
    }
}
