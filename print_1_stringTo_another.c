//copy string element to other string
#include<stdio.h>
void main()
{
int i,j;
char a[5]="strin";
char b[5];
for(i=0;i<=4;i++)
{
b[i]=a[i];
printf("%c",b[i]);
}
b[i]='\0';
printf("%s",b);

}
