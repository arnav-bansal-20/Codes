#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int sum(int a,int b)
{
return a+b;
}
int sub(int a,int b)
{
return a-b;
}
int mul(int a,int b)
{
return a*b;
}
int divide(int a,int b)
{
return a/b;
}
int main()
{
system("cls");
int a,b,c,d,e,f;
printf("first no : ");
scanf("%d",&a);
printf("second no : ");
scanf("%d",&b);
c=sum(a,b);
printf("Sum of no : %d",c);
d=sub(a,b);
printf("Sum of no : %d",d);
e=mul(a,b);
printf("Sum of no : %d",e);
f=divide(a,b);
printf("Sum of no : %d",f);
getchar();
}
