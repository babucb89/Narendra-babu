#include<stdio.h>
#include<conio.h>
void main()
{
int x=0.


           ,y=20,z=5,k,m,n,o,p,q;
k=x&&y;
printf("k is %d\n",k);
m=x||y;
printf("m is %d\n",m);
n=!x;
printf("n is %d\n",n);
o=x&&(y=20);
printf("o is %d\n",o);
p=x||(y=20);
printf("p is %d\n",p);
z=x||(y=20)&&z;
printf("z is %d\n",z);
q=x&&y||y&&z;
printf("q is %d\n",q);
}



