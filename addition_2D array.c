#include<stdio.h>
int main()
{
int a[2][3]={1,2,3,4,5,6};
int i,j,sum;

for(i=0;i<=1;i++)
{
for(j=0;j<=2;j++)
{
    scanf("%d",&a[i][j]);
sum=sum+a[i][j];
}
}
printf("the sum %d",sum);
}
