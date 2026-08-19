#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int main()
{
system("cls");
int a,b;
printf("Enter first no: ");
scanf("%d",&a);
printf("Enter second no: ");
scanf("%d",&b);
if(a>b)
printf("first is bigger");
else if(b>a)
printf("second is bigger");
else
printf("both are equal");
getchar();
}