#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int main()
{
system("cls");
int a;
for(a=2; a<=34; a=a+2)
{
if(a%10==0)
continue;
printf(" %d ",a);
}
getchar();
}