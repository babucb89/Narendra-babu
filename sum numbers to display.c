#include<stdio.h>
void main()
{
int n,i,sum=0,multi=1,average;
printf("the natural numbers to display\n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
sum=sum+i;
multi=multi*i;
average=sum/n;
printf("%d\n",i);
}
printf("the sum is %d\n",sum);
printf("the multi is %d\n",multi);
printf("the average is %d\n",average);
}
