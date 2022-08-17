#include<stdio.h>
void main()
{
int a,b,c,d,e;
printf("enter the values");
scanf("%d %d",&a,&b);
c=a&&b;
d=a||b;
e=!a;
printf(" And is %d",c);
printf(" Or is %d",d);
printf("Not is %d",e);
}
