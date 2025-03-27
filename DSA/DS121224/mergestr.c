#include <stdio.h>
void main()
{
    char str1[21],str2[21],str3[41];
    char *p, *q, *r;
    printf("Enter a string : ");
    scanf(" %s",str1);

    printf("Enter a string : ");
    scanf(" %s",str2);

    p=str1;
    q=str2;
    r=str3;
    for(;*p !='\0';p++,r++)
        *r=*p;
        *r=' ';
    for(r++;*q != '\0';q++,r++)
        *r=*q;
    *r='\0';
    printf("%s",str3);

}
