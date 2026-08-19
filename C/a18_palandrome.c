#include<stdio.h>
int main()
{
int a,b,c=0;
printf("enter no:");
scanf("%d",&a);
b=a;
while(b>0)
{
c=c*10+b%10;
b=b/10;
}
if(a==c)
printf("palandrome: %d",c);
else
printf("not palandrome: %d",c);
return 0;
}