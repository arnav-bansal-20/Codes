#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int main()
{
system("cls");
int a,b,c,i,j,s;
printf("first no:");
scanf("%d",&i);
printf("second no:");
scanf("%d",&j);
for(a=i; a<=j; a++)
{
s=0;
b=a;
while(b>0)
{
c=b%10;
s=s+c*c*c;
b=b/10;
}
if(s==a)
printf("\n armstrong: %d",s);
}
getchar();
}