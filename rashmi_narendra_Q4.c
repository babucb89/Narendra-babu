#include<stdio.h>
int main()
{
int a,b,temp,c,d,e,f;
printf("enter the six digit numbers");
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
temp=a;
a=b;
b=temp;
printf("%d %d",a,b);
}
