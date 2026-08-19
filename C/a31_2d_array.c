#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int main()
{
system("cls");
int abc[3][3];
int a,b;
for(a=0; a<=2; a++)
{
for(b=0; b<=2; b++)
{
printf("enter  no %d%d : ",a,b);
scanf("%d",&abc[a][b]);
}
}
for(a=0; a<=2; a++)
{
for(b=0; b<=2; b++)
{
printf("\t%d",abc[a][b]);
}
printf("\n");
}
getchar();
}