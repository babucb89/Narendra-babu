#include<stdio.h>
int main(){
char a[50]={"big boy bad boy"};
int i;
for(i=0;i<50;i++){
if(a[i]==' ')
    i++;
//continue;
printf("%c",a[i]);
}
}
