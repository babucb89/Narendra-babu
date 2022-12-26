#include<stdio.h>
#include<string.h>
int main()
{
char str1[100]= "narendra";
char str2[100]= "babu";
char str3[100];
int i=0,j=0;
printf("enter the first string %s",str1);
printf("enter the second string %s",str2);
while(str1[i]!='\0')
{
str3[j]=str1[i];
i++;
j++;
//}
while(str2[j]!='\0')
{
str3[i]=str2[i];
i++;
j++;
printf("concunated string");
return ;
}
}}




