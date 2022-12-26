#include<stdio.h>
int main()
{
int ent[5]={23,45,67,89,65};
int sport[5]={34,56,78,90,87};
char key[10];
printf("enter the keyword");
scanf("%s",&key);
for(int i=0;i<5;i++)
    {
if(key==ent)
{
printf("%d",ent[i]);
}
else{
printf("%d ",sport[i]);
}
    }
}



