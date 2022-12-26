//bit stuffing
#include<stdio.h>
int main()
{
int i,a,b,c,d,e;
printf("enter the bits");
scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
if(a==1 && b==1 && c==1 && d==1 && e==1 || a==0 && b==0 && c==0 && d==0 && e==0)
{
printf("it is bit stuffing" );
}
else{
printf("it is not a bit stuffing");
}
printf("enter opposite bits");
scanf("%d",&i);
if(a=b=c=d=e && c!=i)
{
    printf("bit stuffing done");
}
else{
printf("opposite bit and bit stuffing not done");
}
}

