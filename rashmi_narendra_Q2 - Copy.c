#include<stdio.h>
int main()
{
char ch;

printf("enter the alpha");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
printf("\n %c is a VOWEL",ch);
}
else
{
printf("\n %c is a CONSONENT",ch);
}
return 0;
}
