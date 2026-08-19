#include<stdio.h>
#include<math.h>
int main()
{
int a,b;
printf("enter no:");
scanf("%d",&a);
b=sqrt(a);
printf("value of square root of number is : %d", b);
if(b*b==a)
printf("perfect sq");
else
printf("not perfect");
return 0;
}