#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
void sum(int a,int b)
{
printf("\nsum of no : %d",a+b);
}
void sub(int a,int b)
{
printf("\nsub of no : %d",a-b);
}
void mul(int a,int b)
{
printf("\nmul of no : %d",a*b);
}
void divide(int a,int b)
{
printf("\ndiv of no : %d",a/b);
}
int main()
{
system("cls");
int a,b;
printf("first no : ");
scanf("%d",&a);
printf("second no : ");
scanf("%d",&b);
sum(a,b);
sub(a,b);
mul(a,b);
divide(a,b);
getchar();
}
