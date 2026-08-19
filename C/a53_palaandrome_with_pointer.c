#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int p;
int pal(int a)
{
if(a==0)
return 0;
p=p*10+a%10;
pal(a/10);
return p;
}
int main()
{
system("cls");
int a;
printf("enter : ");
scanf("%d",&a);
pal(a);
printf("palandrome : %d",p);
getchar();
}
