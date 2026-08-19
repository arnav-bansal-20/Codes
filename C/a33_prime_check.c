#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int main()
{
system("cls");
int a,b,i,j,c=0;
printf("first no:");
scanf("%d",&i);
printf("second no:");
scanf("%d",&j);
for(a=i; a<=j; a++)
{
c=0;
for(b=2; b<=a/2; b++)
{
if(a%b==0)
{
c=1;
break;
}
}
if(c==0)
printf("\nprime no : %d",a);
}
getchar();
}
