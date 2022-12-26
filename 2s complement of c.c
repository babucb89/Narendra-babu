#include<stdio.h>
int main()
{
    char s[65],result[65]="1";
    int i,n,cnt=0;result[65]='1';
    printf("enter the binary number");
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='1')
            s[i]='0';
        else
            s[i]='1';
    }
    for(i=n-1;i>=0;i--)
    {
        if(s[i]=='1')
        {
            s[i]='0';
            cnt++;
        }
        else
        {
            s[i]='1';
            break;
        }
    }
    if(cnt==n)
    {
        strcat(result,s);
        strcpy(s,result);
    }
    printf("2s complement %s \n",s);
    return 0;
}
