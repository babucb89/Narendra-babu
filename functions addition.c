#include<stdio.h>
void sum();void sub();void mul();void div();
void main()
{
sum();
sub();
mul();
div();
}
void sum()
{
int a=5,b=10,sum=0;
sum=a+b;
printf("%d,sum");
}
void sub()
{
int a=10,b=5,sub=0;
sub=a-b;
printf("%d",sub);
}
void mul()
{
int a=5,b=5,mul=1;
mul=a*b;
printf("mul=%d",mul);
}
void div()
{
int a=10,b=2,div;
div=a/b;
printf("div=%d",div);
}
