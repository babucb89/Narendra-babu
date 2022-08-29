//WAp to print a calender by taking userdefine input
#include<stdio.h>
void main()
{
float year,weak;
int days;
printf("Enter the number of days to count year and weak");
scanf("%d",&days);

year=(days*0.002738);
weak=(days/7);
printf("years = %f \n and weak = %f",year,weak);

}
