#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int main()
{
system("cls");
int a,b,c;
c=0;
printf("enter no:");
scanf("%d",&a);
for(b=1; b<=a/2 ; b++)
{
if(a%b==0)
{
c=c+b;
}
}
if(c==a)
printf("perfect no");
else
printf("not perfect");
getchar();
}