#include<stdio.h>
int main()
{
int a,c=0;
printf("enter no:");
scanf("%d",&a);
while(a>0)
{
a=a/10;
c++;
}
printf("count of no: %d",c);
return 0;
}
