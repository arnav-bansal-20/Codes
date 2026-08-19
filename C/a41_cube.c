#include<stdio.h>
int main()
{
int a,b;
while(1)
{
printf("\n enter no : ");
scanf("%d",&a);
if(a==0)
{
break;
}
else
{
printf(" %d ",a*a*a);
}
}
return 0;
}