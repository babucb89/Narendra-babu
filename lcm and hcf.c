#include<stdio.h>
int main()
{
int n1,n2,a,b,hcf,lcm,temp;
printf("enter the two numbers");
scanf("%d %d",&n1,&n2);
a=n1;
b=n2;
while(b!=0)
{
temp=b;
b=a%b;
a=temp;
}
hcf=a;
lcm=(n1*n2)/hcf;
printf("HCF, %d \n",hcf);
printf("LCM, %d \n",lcm);
}
