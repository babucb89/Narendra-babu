#include<stdio.h>
int areaofrect(int length, int breadth)
{
int area;
area=length*breadth;
return area;
}
int main()
{
int l=5,b=10;
int area=areaofrect(l,b);
printf("%d\n",area);

 l=10,b=10;
 area=areaofrect(l,b);
printf("%d\n",area);
}
