#include<stdio.h>
void main()
{
int d,b,c,i,j,k;
printf("enter the size of array row and column");
scanf("%d %d %d",&d,&b,&c);
int a[d][b][c];
for(i=d;i<=d;i++)
{
for(j=b;j<=b;j++)
{
for(k=c;k<=c;k++)
{
scanf("%d",&a[i][j][k]);
printf("%d",a[i][j][k]);
}
}
}
}
