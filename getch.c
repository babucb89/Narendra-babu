#include<stdio.h>
void main()
{
int a,b;
printf("enter the values");
scanf("%d %d",&a,&b);
printf(" \n bitwise AND:%d", a&b);
printf(" \n bitwise OR:%d" ,a|b);
printf(" \n bitwise XOR:%d", a^b);
printf(" \n bitwise NOT:%d", ~a);
printf(" \n bitwise Right shift:%d", a>>b);
printf(" \n  bitwise left shift:%d", a<<b);
}


