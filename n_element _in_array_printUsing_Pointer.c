#include<stdio.h>
int main(){
char str[500];
printf("Enter the element");
gets(str);
int *p=&str;
printf("%s",p);
}
