#include<stdio.h>
void main()
{
int n,i,sum,average;
printf("enter the numbers");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
sum=sum+i;
average=sum/n;
printf("%d\n",i);
}
printf("the sum %d \n and average %d\n",sum,average);
}

