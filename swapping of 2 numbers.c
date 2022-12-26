#include<stdio.h>
void main()
{
int x,y;
x=10;
y=20;
printf("enter the before swapping %d %d",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("after swapping %d %d",x,y);
}
