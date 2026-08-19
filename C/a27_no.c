#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int main()
{
system("cls");
int abc[10];
int a;
for(a=0; a<=9; a++)
{
printf("enter no:");
scanf("%d",&abc[a]);
}
for(a=9; a>=0; a--)
{
printf("\n%d",abc[a]);
}
getchar();
}