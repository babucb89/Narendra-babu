//program to find factorial of number using pointer
#include<stdio.h>
void main(){
int a=5,f=1,i,fact,factorial;

for(i=1;i<=a;i++){

fact=&f;

fact=(fact*i);

*factorial=&fact;

printf("%d\n",factorial);
}

}
