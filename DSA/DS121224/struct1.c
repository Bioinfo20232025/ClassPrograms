#include <stdio.h>
struct studrec
    {
        int rno;
        char name[21];
        int m1;
        int m2;
        int m3;
    };
void main()
{
    struct studrec rec;
    printf("Enter the rno : ");
    scanf(" %d",&rec.rno);
    printf("Enter the name : ");
    scanf(" %s",rec.name);
    printf("Enter marks 1 : ");
    scanf(" %d",&rec.m1);
    printf("Enter marks 2 : ");
    scanf(" %d",&rec.m2);
    printf("Enter marks 3 : ");
    scanf(" %d",&rec.m3);
}
