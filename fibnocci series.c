#include<stdio.h>
int a,b,t,n,i;
void fib(int,int);
void main()
{
a=0;
b=1;
printf("enter the number of num");
scanf("%d",&n);
fib(a,b);
}
void fib(int a,int b)
{
while(i<n)
{
t=a+b;
printf("%d ",a);
a=b;
b=t;
i++;
}
}
