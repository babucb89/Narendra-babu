//29)c program for searching an array for a particular number and its index
#include<stdio.h>
int main()
{
    int a[50],i,n,num;

    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the number found: ");
    scanf("%d", &num);

    for(i=0; i<n; i++)
    {
        if(a[i]==num)
        {
			printf("index of element is %d",i);
            return 0;
        }

    }

}
