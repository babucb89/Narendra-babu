#include<stdio.h>
void main(){
    int a=100;
    int b=10;
    int*p1,*p2;

    p1=&a;
    p2=&b;

    if(*p1>*p2){
        printf("largest number is%d\n",a);
    }
    else{
        printf("largest number is%d\n",b);
    }
}
