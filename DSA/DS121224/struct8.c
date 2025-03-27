#include <stdio.h>
typedef struct
{
    int bno;
    char bname[21];
    char auname[21];
    float price;
}book;
void input_book(book *b)
{
    printf("Enter the bookno : ");
    scanf(" %d",&b->bno);
    printf("Enter the bookname : ");
    scanf(" %s",b->bname);
    printf("Enter the author name : ");
    scanf(" %s",b->auname);
    printf("Enter the price : ");
    scanf(" %f",&b->price);
}
void show_book(book *b, int pos)
{
    printf("Book No : %d\n",b[pos].bn/o);
    printf("Book Name : %s\n",(b+pos)->bname);
    printf("Book Author Name : %s\n",(b+pos)->auname);
    printf("Book Price : %f\n",(b+pos)->price);

}
void show_all(book *b, int last)
{
    int i;
    for(i=0;i<last;i++)
    {
    show_book(b, i);
    }
}
void main()
{
    book catalog[100];
    int cur=0,b;
    int i,n;
    char ch;
    do
    {
        printf("a. Add a book\n");
        printf("b. Add multiple\n");
        printf("c. Show a book\n");
        printf("d. Show all books\n");
        printf("0. Exit\nEnter your choice : ");
        scanf(" %c",&ch);
        switch(ch)
        {
        case 'a':
                input_book(&catalog[cur]);
                cur++;
        case 'b':
            printf("Enter number of books to enter : ");
            scanf(" %d",&n);
            for(i=1;i<=n;i++)
                input_book(&catalog[cur+i])
            cur+=n-1;
            break;
        case 'c':
            printf("Enter the pos : ");
            scanf(" %d",&n);
            show_book(catalog,n);
            break;
        case 'd':
            show_all(catalog, cur);
        }
    }while(ch != '0');
}
