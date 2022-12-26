#include<stdio.h>
void repeatstring(char *name,int count)
{
printf("%d :%s",count+1,name);
count+=1;
if(count<50)
repeatstring(name,count);
}

int main()
{
  char name[20];
  printf("\n enter your string");
  scanf("%s",name);
  repeatstring(name,0);
  return 0;
  }
