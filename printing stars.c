#include<stdio.h>
int main()
{
int i,j;
for(i=0;i<=5;i++)
{
    char ch=65;
for(int k=5;k>=i;k--)
    printf(" ");
for(j=1;j<=i;j++)
{
    printf("%c",ch++);
}
ch--;
for(int l=1;l<i;l++)
{
    printf("%c",--ch);
}
printf("\n");
}
}
