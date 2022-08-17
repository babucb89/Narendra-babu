#include<stdio.h>
void main()
{
int a,b,c,d,e,f,g,h,i,j,temp;
printf("%d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
temp=a;
a=b;
b=temp;
printf("%d %d",&a,&b);
}
