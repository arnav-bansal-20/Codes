#include<stdio.h>
int main()
{
int a,b,c,i,j;
printf("first no:");
scanf("%d",&i);
printf("second no:");
scanf("%d",&j);
for(a=i; a<=j; a++)
{
c=0;
b=a;
while(b>0)
{
c=c*10+b%10;
b=b/10;
}
if(c==a)
printf("\n palandrome : %d",c);
}
return 0;
}