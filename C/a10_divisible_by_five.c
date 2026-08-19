#include<stdio.h>
int main()
{
int x,a,b;
x=0;
for(a=1; a<=10; a=a+1)
{
printf("enter no:");
scanf("%d",&b);
if(b%5==0)
{
x=x+1;
}
}
printf("divisible by 5 : %d",x);
return 0;
}