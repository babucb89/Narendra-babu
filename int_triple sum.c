#include<stdio.h>
void intsum();
void main()
{
intsum();
}
void intsum(){
int a,b,sum,res;
scanf("%d",&a);
scanf("%d",&b);

if(a==b)
    {
sum=a+b;
res=sum+sum+sum;
printf("%d",res);
}
else{
printf("Not equal");
}
}
