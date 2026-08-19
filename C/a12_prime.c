#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int main()
{
system("cls");
int a,b,c=0;
printf("enter no:");
scanf("%d",&a);
for(b=2; b<=a/2; b=b++)
{
if(a%b==0)
{
c=1;
break;
}
}
if(c==0)
printf("prime no");
else
printf("not prime");
getchar();
}