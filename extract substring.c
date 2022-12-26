#include<stdio.h>
int main()
{
char str1[80],str2[80];
int n,i,j;
printf("enter the first string\n");
gets(str1);
printf("enter the second string\n");
gets(str2);
for(n=0;str2[n]!='\0';n++)
{
for(i=0,j=0;str1[i]!='\0'&& str2[j]!='\0';i++)
{
if(str1[i]==str2[j])
{
j++;
}
else
j=0;
}
}
if(j==1)
{
printf("substring found",i-j+1);
}
else
{
printf("substring not found");
}
return 0;
}
