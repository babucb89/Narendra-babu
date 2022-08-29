// check is it multiple of 3 or 7
#include<stdio.h>
void multiple();
void main(){

multiple();}
void multiple(){
int a=1;
printf("Enter the number to check multiple of 3 or 7\n");
scanf("%d",&a);
if(a%3==0){
printf("It is multiple of 3\n");
}
else if(a%7==0){
printf("It is multiple of 7\n");
}
else {
printf("No one condition satisfy \n");
}

}
