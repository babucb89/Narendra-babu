//reverse the array
#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5};
int rev=0,i;
for(i=0;i<=a[5]-1;i++)
{


rev=a[i]%10;
a[i]=a[i]/10;
}
printf("the reversed  array is %d",rev);


}
