#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int main()
{
system("cls");
int a,b,c;
printf("Enter first no: ");
scanf("%d",&a);
printf("Enter second no: ");
scanf("%d",&b);
printf("Enter third no: ");
scanf("%d",&c);
if(a>b && a>c)
printf("first no  is bigger");
else if(b>a && b>c)
printf("second no is bigger");
else if(c>a && c>b)
printf("third no is bigger");
getchar();
}