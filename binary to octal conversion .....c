#include<stdio.h>
int main()
{
    int oct=0,dec=0,rem=0,place=0,num;
    printf("enter the binary equvilant");
    scanf("%d",&num);
    printf("octal to binary equvilant\n",num);
    while(num)
    {
        rem=num%10;
        dec=dec+rem*pow(2,place);
        num=num/10;
        place++;
    }
    place=1;
    //rem=0;
    while(dec)
    {

        rem=dec%8;
        oct=oct+rem*place;
        dec=dec/8;
        place=place*10;
    }
    printf("%d",oct);
}
