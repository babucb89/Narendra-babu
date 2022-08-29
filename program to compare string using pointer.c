//program to compare string using pointer
#include<stdio.h>
void main()
{
    char string1[20],string2[20],*str1,*str2;

    printf("enter the string");
    scanf("%s %s",&string1,&string2);

    str1=&string1;
    str2=&string2;

    int y=strcmp(str1,str2);
    (y==0)?printf("equal"):
    printf("not equal");
}
