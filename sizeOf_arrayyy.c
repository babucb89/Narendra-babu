#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int i,n,small,large;
    n=sizeof(arr)/sizeof(arr[0]);
    small=large=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    if(arr[i]>large)
    {
        large=arr[i];
    }
    }
    printf(" smallest number=%d\n",small);
    printf("largest number=%d",large);
}
