#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int main()
{
system("cls");
int a;
printf("Enter no:");
scanf("%d",&a);
if(a%3==0 && a%5==0)
printf("no is divisible by both");
else if(a%3==0)
printf("no is divisible by 3");
else if(a%5==0)
printf("no is divisible by 5");
else
printf("divisible by none");
getchar();
}