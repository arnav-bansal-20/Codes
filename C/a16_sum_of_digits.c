#include<stdio.h>
int main()
{
int a,s=0;
printf("enter no:");
scanf("%d",&a);
while(a>0)
{
s=s+a%10;
a=a/10;
}
printf("sum of digit: %d",s);
return 0;
}