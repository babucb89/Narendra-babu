#include<stdio.h>
int a[32],i;
void printarray(int a[32])
{ int count=0;
    for(i=31;i>=0;i--)
    {
        printf("%d",a[i]);
        count++;
         if(count%4==0)
        {
            printf(" ");
        }
    }

}
void twos(int a[32],int n)
{
    for(i=0;i<32;i++)
    {
        a[i]=((n>>i)&1);  //((1<<i)&n)
    }
    printarray(a);
    printf("\n");
}
void main()
{
    int n;
    printf("Enter a no\n");
    scanf("%x",&n);
    printf("In Binary\n");
    twos(a,n);
    n=~n+1;
    printf("After 2's compliment\n");
    printf("In hex %x\n",n);
    printf("2's compliment in binary\n");
    twos(a,n);
}
