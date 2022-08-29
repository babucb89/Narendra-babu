#include<stdio.h>
void main()
{
int a,b,sum=0;
printf("enter the values");
scanf("%d %d",&a,&b);
sum=a+b;
if(a==b)
{
sum=(a+b)*3;
printf("the sum is =%d",sum);
}
else{
printf("the numbers are not equal");
}
return(sum);
}
