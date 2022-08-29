//odd natural number and their sum
#include<stdio.h>
int main()
{
int a,sum;
printf("enter the term : ");
scanf("%d",&a);
for(int i=0;i<=a;i++)
{
if(i%2!=0)
{
printf(" odd numbers are %d\n",i);

}
sum=sum+i;
}
printf("sum is %d\n",sum);
}
