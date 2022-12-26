#include<stdio.h>
int main()
{
int a[5]={5,4,6,8,9},i,c;
int *ptr=&a[0];
for(i=0;i<5;i++)
{
    c=*(ptr+i);
printf("%d ",c);
}
}
