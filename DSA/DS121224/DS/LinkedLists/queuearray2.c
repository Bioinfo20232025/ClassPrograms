#include <stdio.h>
#define size 5
typedef struct
{
    int data[size];
    int start;
    int end;
}queue;
void enqueue(queue *que, int value)
{
    if(que->start==-1 && que->end == -1)
    {
        que->start=que->end=0;
        que->data[que->end]=value;
    }
    else
    {

        if(que->end == size-1 && que->start != 0)
        {
            que->end=0;
            que->data[que->end]=value;

        }
        else if(que->end == que->start-1)
        {
            printf("The que is full\n");
        }
        else if((que->start == 0 && que->end == size -1))
        {
            printf("The que is full\n");

        }
        else if(que->end < size -1)
        {
            que->end++;
            que->data[que->end]=value;
        }

    }

}
int dequeue(queue *que)
{
    int t;
    if((que->start == -1 && que->end== -1) || (que->start > que->end))
    {

        printf("The que is empty\n");
    }
    t=que->data[que->start];
    que->data[que->start]=-1;
    que->start++;
    return t;


}

void show(queue que)
{
    int i;
   for(i=0;i<size;i++)
   {
       printf("%d->",que.data[i]);
   }


}
void main()
{
    int ch;
    int value;
    queue que;
    que.start=que.end=-1;
    for(int i=0;i<size;i++)
    {
        que.data[i]=-1;
    }
    do
    {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Show Queue\n");
        printf("0. Exit\n");
        printf("Enter your choice : ");
        scanf(" %d",&ch);

        switch(ch)
        {
        case 1:
            printf("Enter the value to add : ");
            scanf(" %d",&value);

            enqueue(&que,value);
            break;
        case 2:
            value=dequeue(&que);
            break;
        case 3:
            show(que);
            break;
        case 0:
            printf("Exiting.....\n");
            break;
        default:
            printf("Invalid choice\n");
            break;

        }

    }while(ch != 0);
}
