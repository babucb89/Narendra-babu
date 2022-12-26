#include<stdio.h>
void main()
{
int a,b;
printf("enter the numbers");
scanf("%d %d", &a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d %d", a,b);


//for(i=1;i<=10;i++)
//printf("%d ",i);
}
