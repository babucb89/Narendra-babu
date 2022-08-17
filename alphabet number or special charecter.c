#include<stdio.h>
void main()
{
char c;
printf("enter the character");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
printf("%c is alphabit",&c);
}
else if(c>='0'&&c<='9')
{
printf("%c is digit",c);
}
else
{
printf("%c is a special character");
}
}
