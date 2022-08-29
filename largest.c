#include<stdio.h>
void main(){
int a,b,rem1,rem2;

printf("Enter the number");
scanf("%d %d",&a,&b);
rem1=a/5;
rem2=b/5;
if(rem1==rem2)
{
if(a>b){
printf("Greatest value is %d",a);
}
if(b>a){
printf("Greatest value is %d",b);
}
if(a==b){
printf("0");
}
}
}




