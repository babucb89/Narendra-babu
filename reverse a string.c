#include<stdio.h>
//#include<string.h>
int main()
{
char str[20];
printf("enter string");
gets(str);
printf("string",str);
printf("string reverse %s",strrev(str));
return 0;
}

