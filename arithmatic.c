#include<stdio.h>
void main()
{
 int  a=5,b=2,c;
 printf("before swapping of numbers=%d %d",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("after swapping numbers= %d %d",a,b);
}
