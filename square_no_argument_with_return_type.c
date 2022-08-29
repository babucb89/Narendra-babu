//program to find square root
//no argument with return type
#include<stdio.h>

int square();
int main()
{
res=square();
printf("%d",res);
}
int square()
{
    int a,res=0;
    scanf("%d",&a);
    res=a*a;
    printf("%d",res);

return res;
}
