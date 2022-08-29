#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5};
int b,i;

for(i=0;i<5;i++)
if(a[i]=a[i])
{

    b=a[i];
    a=b[i];
}
printf("%d \n",b);
}

