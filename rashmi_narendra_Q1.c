#include<stdio.h>
void main()
{
int n,x;
printf("enter the value of n");
scanf("%d",&n);
if(x=n%11==0||(n%11==1&&n>11))
{
printf("SPECIAL ");
}
else
{
printf("NOT SPECIAL");
}
}
