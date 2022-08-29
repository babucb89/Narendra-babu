//print enter value table
#include<stdio.h>
void main()
{
int n,j,mul=1;
printf("enter the numbers");
scanf("%d",&n);
for(n=1;n<=10;n++)
{
for(j=1;j<=10;j++)
{
mul=n*j;
printf("%d * %d =%d\n \t",n,j,mul);
}
}
}
