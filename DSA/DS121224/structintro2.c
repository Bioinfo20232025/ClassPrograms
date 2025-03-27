#include <stdio.h>
void main()
{
    int rno[5];
    char name[5][21];
    int m1[5];
    int m2[5];
    int m3[5];
    int avg[5],i;
    int hi=0, ha=0;
    for(i=0;i<3;i++)
    {
        rno[i]=i+1;
        printf("Enter name for %d : ",rno[i]);
        scanf(" %s",name[i]);
        printf("Enter 3 marks  : ");
        scanf(" %d",&m1[i]);
        scanf(" %d",&m2[i]);
        scanf(" %d",&m3[i]);
        avg[i]=(m1[i]+m2[i]+m3[i])/3;
        if(avg[i] > ha)
        {
            ha=avg[i];
            hi=i;
        }

    }
    for(i=0;i<3;i++)
    {
        printf("RollNo :  %d\n",rno[i]);
        printf("Name   :  %s\n",name[i]);
        printf("Marks  :\n");
        printf("Subject 1 :  %d\n",m1[i]);
        printf("Subject 2 :  %d\n",m2[i]);
        printf("Subject 3 :  %d\n",m3[i]);

        printf("Average   :  %d\n",avg[i]);
        if(avg[i] > 50)
            printf("Pass\n");
        else
            printf("Fail\n");
        if(i == hi)
            printf("Congratulations\n");
    }


}
