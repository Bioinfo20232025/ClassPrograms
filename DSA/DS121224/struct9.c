#include <stdio.h>
typedef struct
{
    int rno;
    char name[21];
    //int marks[4];

    int avgmarks;

}student;
student input_student()
{
    student rec;
    printf("Enter the roll no : ");
    scanf(" %d",&rec.rno);
    printf("Enter the name : ");
    scanf(" %s",rec.name);
    printf("Enter the avg marks : ");
    scanf(" %d",&rec.avgmarks);
    return rec;
}

student get_highestaverage(student *students,int size)
{
    int h;
    student s;
    h=students[0].avgmarks;
    for(int i=1;i<size;i++)
    {
        if(students[i].avgmarks > h)
        {
            h=students[i].avgmarks;
            s=students[i];
        }
    }
    return s;

}

void show_student(student s)
{

    printf("Rno     : %d\n",s.rno);
    printf("Name    : %s\n",s.name);
    printf("Average : %d\n",s.avgmarks);

}
void main()
{
    student recs[5], s;
    int i;
    for(i=0;i<5;i++)
    {
        recs[i]=input_student();
    }

    for(i=0;i<5;i++)
    {
        show_student(recs[i]);
    }
    s=get_highestaverage(recs,5);
    printf("\n\n\nThe student with highest marks is  : ");
    show_student(s);

}
