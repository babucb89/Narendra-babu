#include<stdio.h>
int main()
{
    int quotient,remainder,num,divisor;
    num=17;
    divisor=2;
    quotient=num/divisor;
    remainder=num-(quotient*divisor);
    printf("%d",remainder);
}
