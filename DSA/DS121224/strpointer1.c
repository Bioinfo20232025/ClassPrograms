 #include <stdio.h>
 void comp(char *str )
{
    for(;*str!= '\0';str++)
    {

        if(*str=='A'){
            *str='T';
        }
         else if(*str=='T'){
            *str='A';
        } else if(*str=='G'){
            *str='C';
        } else if(*str=='C'){
            *str='G';
        }
    }
}
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
        printf("DNA string is valid\n");
        comp(str);
        printf("%s",str);
    }
    else
    {
        printf("DNA string is not valid");
    }
}
