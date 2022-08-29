#include<stdio.h>
int main()
{
    int small,large,a;

    printf("enter size of array");
    scanf("%d",&a);
    int arr[a],i;
    small=large=arr[0];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
        for(i=0;i<a;i++)
    if(arr[i]>large)
    {
        large=arr[i];
    }
    }
    printf("the smallest number =%d\n",small);
    printf("the largest number =%d\n",large);
}
