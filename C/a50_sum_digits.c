#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int s=0;
int sum(int a)
{
if(a==0)
return 0;
s=s+a%10;
sum(a/10);
return s;
}
int main()
{
system("cls");
int a;
printf("enter : ");
scanf("%d",&a);
sum(a);
printf("sum of digits : %d",s);
getchar();
}