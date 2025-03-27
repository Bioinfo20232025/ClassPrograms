#include <stdio.h>

void frequency(char *str){
int i,j,cnt=0,flg,k;
for(i=0;*(str+i)!='\0';i++,cnt=0,flg=1){
        for(k=i-1;k>=0;k--){
            if(*(str+i)==*(str+k)){
                flg=0;
                break;
            }
        }
        if(flg==0){
            continue;
        }
for(j=0;str[j]!='\0';j++){
if(str[i]==str[j]){
cnt++;
}
}
printf("%c occurs %d times\n",str[i],cnt);
}
}

void main()
{
    char arr1[10];

    printf("Enter a sting :");
    scanf("%s",arr1);
    frequency(arr1);
}
