// prime number between 1 to 100
/*
#include<stdio.h>
int main()
{
int num,r,prime,i,n;
printf("Enter the range");
scanf("%d",&r);
while(num<=r)
{
prime=1;
i=2;
while(i<num){
if (num%i==0)
{
    prime=0;
}
i++;
}
if(prime==1){
printf("%d\t",num);
}
n++;
}


}
*/
#include<stdio.h>
int main(){
int n=100,i,j,z;
for(int i=1;i<=n;i++)
{
    z=0;
    for(int j=2;j<=i/2;j++)
    {
        if(i%j==0)
            {
            z++;
        }
    }
    if(z==0&&i!=1)
        printf("%d\t\n",i);

}

}
