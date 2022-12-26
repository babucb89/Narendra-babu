#include<stdio.h>
int main()
{
int a[5][5]={
    {1,2,3,4,5},
    {6,7,8,9,0},
    {1,2,3,4,5},
    {11,22,33,44,55},
    {23,32,43,32,34}
    };
int i,j;
int sum=0;
printf("enter the row total");
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
sum+=a[i][j];
printf("%d ",sum);
sum=0;
}
printf("enter the column total");
for(j=0;j<5;j++)
{
for(i=0;i<5;i++)
{
sum+=a[i][j];
printf("%d ",sum);
sum=0;
}
return 0;
}
}
}
