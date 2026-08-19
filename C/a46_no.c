#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int main()
{
system("cls");
int abc[10];
int a,b;
for(a=0; a<=9; a++)
{
printf("enter no:");
scanf("%d",&abc[a]);
}
printf("enter position:");
scanf("%d",&b);
printf("no %d",abc[b-1]);
getchar();
}