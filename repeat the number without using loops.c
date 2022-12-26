#include<stdio.h>
void repeatnumber(int num,int count)
{
printf("%d ",count+1,num);
count+=1;
if(count<100)
repeatnumber(num,count);
}

int main()
{
  int num[20];
  printf("\n enter your number");
  scanf("%d",num);
  repeatnumber(num,0);
  return 0;
  }
