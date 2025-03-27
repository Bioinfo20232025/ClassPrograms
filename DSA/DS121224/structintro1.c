#include <stdio.h>
void main()
{
    int rno;
    char name[21];
    int sum, avg;
    int marks[3];
    char grade;

    int i;
    for(rno=1;rno<6;rno++)
    {
        printf("Enter the name for rno %d : ",rno);
        scanf(" %s",name);
        printf("Enter the 3 marks : \n");
        sum=0;
        for(i=0;i<3;i++)
        {
            scanf(" %d",&marks[i]);
            sum+=marks[i];
        }
        avg=sum/3;
        if(avg > 50)
            printf("Pass\n");
        else
            printf("Fail\n");

    }
}
