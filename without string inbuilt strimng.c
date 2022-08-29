#include<stdio.h>
void main()
{
int i,n;
char str[20];
printf("enter the string to get rev");
n=strlen(str);
printf("revesed string is");
for(i=n-1;i>=0;i--)
{
printf("%c",str[i]);
}
}

