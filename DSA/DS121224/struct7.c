#include <stdio.h>
typedef struct
{
    int feet;
    int inches;
}distance;
void input_distance(distance *dt)
{
    printf("Enter the inches : ");
    scanf(" %d",&dt->inches);
    printf("Enter the feet : ");
    scanf(" %d",&dt->feet);
    if(dt->inches > 12)
    {
        dt->feet+=dt->inches/12;
        dt->inches=dt->inches % 12;
    }
}
void show_distance(distance dt)
{
    printf("Feet : %d\nInches : %d\n",dt.feet, dt.inches);
}
void main()
{
    distance dt={0,0};
    int ch;
    do
    {
        printf("1. Input the distance\n");
        printf("2. Show  the distance\n");
        printf("Enter the choice (0 to Exit) : ");
        scanf(" %d",&ch);
        switch(ch)
        {
        case 1:
            input_distance(&dt);
            break;
        case 2:
            show_distance(dt);
            break;
        case 0:
            printf("Exiting....\n");
            break;
        default:
            printf("Invalid Choice ...\n");
        }
    }while(ch != 0);
}
