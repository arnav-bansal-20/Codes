#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int f=1;
int fct(int a)
{
if(a==1)
return f;
f=f*a;
fct(a-1);
}
int main()
{
system("cls");
int a;
printf("enter : ");
scanf("%d",&a);
fct(a);
printf("factorial : %d",f);
getchar();
}
