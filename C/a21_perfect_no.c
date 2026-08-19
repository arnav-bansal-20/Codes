#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int main()
{
system("cls");
int a,b,i,j,c;
printf("first no:");
scanf("%d",&i);
printf("second no:");
scanf("%d",&j);
for(a=i; a<=j; a++)
{
c=0;
for(b=1; b<=a/2; b++)
{
if(a%b==0)
{
c=c+b;
}
}
if(c==a)
printf("\nperfect no : %d",a);
}
getchar();
}
