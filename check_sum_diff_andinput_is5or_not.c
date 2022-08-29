#include<stdio.h>
void xyz();
void main()
{
xyz();
}
void xyz(){
int a,b;
printf("Enter the any two value\n");
scanf("%d %d",&a,&b);
 if(a+b==5||a-b==5||a==b==5){
 printf("true");
 }
 else{
 printf("false");
 }
}
