#include <stdio.h>
void main()
{
    char str1[21],str2[21],*a, *b;
    printf("Enter 2 strings : ");
    scanf(" %s",str1);
    scanf(" %s",str2);

    for(a=str1,b=str2;*a!='\0' && *b!='\0';a++,b++)
    {
        if(*a != *b)
            break;
    }
    if(*a == '\0' && *b == '\0')
        printf("%s and %s are the same\n",str1,str2);
    else
        printf("%s and %s are not the same\n",str1,str2);


}
