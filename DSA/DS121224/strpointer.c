#include <stdio.h>
void main()
{
    char str[21], *ptr;
    printf("Enter a DNA string : ");
    scanf(" %s",str);
    ptr=str;
    int i,flag=0;
    for(ptr=str;*ptr!='\0';ptr++)
    {
        if(*ptr!='A' && *ptr!='T' && *ptr!='G' && *ptr!='C')
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("DNA string is valid");
    }
    else
    {
        printf("DNA string is not valid");
    }

}
