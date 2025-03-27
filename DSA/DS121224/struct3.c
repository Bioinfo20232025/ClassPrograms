#include <stdio.h>
typedef struct
{
    int rno;
    char name[21];

}record;
void main()
{
    record r1, r2;
    printf("Enter the first rno : ");
    scanf("%d",&r1.rno);
    printf("Enter the first name : ");
    scanf("%s",r1.name);

    printf("Enter the second rno : ");
    scanf("%d",&r2.rno);
    printf("Enter the second name : ");
    scanf("%s",r2.name);


}
