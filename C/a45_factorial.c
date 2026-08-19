#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
#include<math.h>
int sqr(int a)
{
return a*a;
}
int cube(int a)
{
return a*a*a;
}
int sqrt(int a,int b)
{
return b=sqrt(a);
}
int fct(int a)
{
int g,f=1;
for(g=1; g<=a; g++)
{
f=f*g;
}
return f;
}
int main()
{
system("cls");
int a,b,c,d,e,f,g,h;
printf("enter no : ");
scanf("%d",&a);
c=sqr(a);
printf("\nsquare : %d",c);
d=cube(a);
printf("\ncube : %d",d);
e=sqrt(a);
printf("\nsqrt : %d",e);
f=fct(a);
printf("\nfactorial : %d",f);
getchar();
}