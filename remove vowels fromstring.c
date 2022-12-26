#include<stdio.h>
int main()
{
char s[]="Narendra";
int len= strlen(s);
for(int i=0;i<len;i++)
{
if((s[i]!='a' & s[i]!='e' &s [i]!='i' & s[i]!='o' & s[i]!='u'))
printf("%c",s[i]);
}
}
