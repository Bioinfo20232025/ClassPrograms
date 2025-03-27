#include <stdio.h>
typedef struct
{
    int data;
    struct node *next;

}node;
node *start=NULL,*end=NULL,*curr=NULL;

void enqueue(int value)
{
//    node *curr;
    curr=(node *)malloc(sizeof(node));
    curr->data=value;
    curr->next=NULL;
    if(start== NULL && end == NULL)
    {
      //  printf("The queue is empty\n");
        start=end=curr;
    }

    else
    {
        end->next=curr;
        end=curr;
    }

}
int dequeue()
{
    node *tmp;
    int n=-1;
    if(start == NULL)
        printf("The queue is empty\n");
    else
    {
        tmp=start;
        start=start->next;
        printf("Removing %d\n",tmp->data);
        n=tmp->data;
        free(tmp);

    }
    return n;
}

void show(node *start)
{
    printf("I am in show\n");
    node *tmp=start;
    while(tmp)
    {
        printf(" %d-->",tmp->data);
        tmp=tmp->next;
    }
}

void main()
{

    start=end=NULL;

    int ch, value;
    do
    {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Show\n");
        printf("0. Exit\n");
        printf("Enter your choice : ");
        scanf(" %d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the value : ");
            scanf(" %d",&value);
            enqueue(value);
            break;
        case 2:
            value=dequeue();
            printf(" %d --> removed\n",value);
            break;
        case 3:
            show(start);
            break;
        case 0:
            printf("Exiting ...");

            break;
        default:
            printf("Invalide choice ....");
            break;

        }
    }while(ch != 0);

}
