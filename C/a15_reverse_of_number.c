#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int main()
{
int a,b,c;
printf("enter no:");
scanf("%d",&a);
while(a>0)
{
    b=a%10;
c=c*10+b;
a=a/10;
}
printf("reverse of number %d",c);
return 0;
}