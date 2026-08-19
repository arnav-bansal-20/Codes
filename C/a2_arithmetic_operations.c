#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int main()
{
system("cls");
int a,b,c,d,e,f,g,h;
printf("Enter first no : ");
scanf("%d",&a);
printf("Enter second no : ");
scanf("%d",&b);
c=a+b;
d=a-b;
e=a*b;
f=a/b;
g=(a+b)/2;
h=a%b;
printf("\n first no: %d",a);
printf("\n second no: %d",b);
printf("\n sum of no: %d",c);
printf("\n sub of no: %d",d);
printf("\n mul of no: %d",e);
printf("\n div of no: %d",f);
printf("\n add of no: %d",g);
printf("\n div of no: %d",h);
getchar();
}