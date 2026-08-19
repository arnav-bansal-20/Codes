#include<stdio.h>
int main()
{
int b,a;
printf("enter no: ");
scanf("%d",&b);
for(a=1; a<=10; a=a+1)
{
printf("\n%d\t*\t%d\t=\t%d",b,a,a*b);
}
return 0;
}
