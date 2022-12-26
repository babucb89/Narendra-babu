#include<stdio.h>
#pragma pack(1)
struct abc{
    //int c;
char a;
int c;
char b;
//int c;
};
int main()
{
struct abc var;
printf("%d",sizeof(var));
}
