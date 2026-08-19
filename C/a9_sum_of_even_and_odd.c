#include<stdio.h>
int main()
{
int es,even,os,odd,a,b;
es=0;
even=0;
os=0;
odd=0;
for(a=1; a<=10; a=a+1)
{
printf("enter no:");
scanf("%d",&b);
if(b%2==0)
{
es=es+b;
even++;
}
else
{
os=os+b;
odd++;
}
}
printf("sum of even: %d",es);
printf("total even: %d",even);
printf("sum of odd: %d",os);
printf("total odd : %d",odd);
return 0;
}