#include<stdio.h>
int main()
{
int x=5;
int *p,*q;
p=&x;
q=p;
*q=4;
//*ptr=4;
printf("%d %d",*p,*q);
}
