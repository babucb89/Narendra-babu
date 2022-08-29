#include<stdio.h>
void nearest();
void main(){
nearest();}
void nearest()
{
int a,b,i;
printf("enter any two number\n");
scanf("%d %d",&a,&b);

if(a>b){
printf("nearest to 100 is %d\n",a);
}
if(b>a){
printf("nearest to 100 is %d\n",b);
}
if(a==b){
    printf("0");
}
if((a>100)||(b>100)){
    printf("one of value is greater than 100\n");
}
else if(a==b==100){
printf("one of value is equal to 100\n");
}
}
