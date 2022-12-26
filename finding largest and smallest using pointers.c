#include<stdio.h>
void minMax(int arr[],int len,int *max,int *min)
{
*min = *max = arr[0];
int i;
for(i=1;i<len;i++)
{
if(arr[i] > *max)
*max = arr[i];
if(arr[i] < *min)
*min=arr[i];
}
}

int main()
{
int a[]={12,34,56,43,23,678,99,543,1,2,45,78,90,87,65,4};
int min,max;
int len=sizeof(a)/sizeof(a[0]);
minMax(a,len,&min,&max);
printf("maximum value of array:%d\n minimum value of array:%d\n ",min,max);
return 0;
}
