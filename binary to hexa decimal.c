#include<stdio.h>
//#include<math.h>
int main()
{
int i,n,rem,sum=0;
printf("enter the binary equvilant number");
scanf("%d",&n);
i=0;
while(n>0)
{
rem=n%16;
sum=sum+rem*pow(2,i);
n=n/16;
i++;
}
printf("%d",sum);
}
