#include <stdio.h>
typedef struct
{
    int dd;
    int mm;
    int yy;
}date;
void show_date(date dt)
{
    printf("day : %d\n", dt.dd);
    printf("month : %d\n", dt.mm);
    printf("year : %d\n",dt.yy);
}
date input_date()
{
        date dt;
        printf("day :");
        scanf(" %d",&dt.dd);
        printf("month :");
        scanf(" %d",&dt.mm);
        printf("year :");
        scanf(" %d",&dt.yy);
        return dt;
}
void main()
{
    date dt;
    dt=input_date();
    show_date(dt);
}
