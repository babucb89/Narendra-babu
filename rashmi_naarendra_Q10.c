#include<stdio.h>
void main()
{
int a,b,r;
printf("enter the val.ue and bits");
scanf("%d %d",&a,&b);
r=1<<a&b;
(r==0)?printf("7th bit clear"):printf("7th bit is set");
}
