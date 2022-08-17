#include<stdio.h>
void main()
{
int a,b,r;
printf("enter the value and bits");
scanf("%d %d",&a,&b);
r=1<<a&b;
(r==0)?printf("14th bit clear"):printf("14th bit is set");
}
