#include<stdio.h>
int rev(int a)
{
if(a==0)
return 0;
printf("%d",a%10);
rev(a/10);
}
int main()
{
int a;
printf("enter : ");
scanf("%d",&a);
rev(a);
return 0;
}
