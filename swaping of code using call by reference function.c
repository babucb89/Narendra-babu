//swaping of code using call by reference function
#include<stdio.h>
void func(int*,int*);
int main(){
    int a=5,b=4;
 func(&a,&b);
 printf("%d %d",a,b);
}
void func(int*a,int*b){
int temp;
temp=*a;
*a=*b;
*b=temp;

}
