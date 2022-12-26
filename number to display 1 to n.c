//24)program to display all disarium numbers
#include<stdio.h>
int main()
{
int n,i,sum;
printf("enter the numbers to display");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    sum=sum+i;
printf("%d\t",i);
}
return 0;
}
