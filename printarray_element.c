//wap to store n element in narray and print element using pointer
#include<stdio.h>
void main(){
int a[10],i;
int *p1;
printf("Enter the element");

for(i=0;i<=10;i++)
    {

scanf("%d",&a);
p1=&a[i];
printf("%d",p1);
}

}
