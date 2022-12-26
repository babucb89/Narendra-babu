#include<stdio.h>
void series(int i,int j)
{
    int n=j;
    for(i=0,j=n;i<=n,j>=0;i++,j--)
    {
        printf("%d+%d\n",i,j);
    }
}
    void main()
    {
    int i=0,j,n;
    printf("enter a number\n");
    scanf("%d",&n);
    j=n;
    series(i,j);
}
