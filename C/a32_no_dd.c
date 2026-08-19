#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int main()
{
system("cls");
int abc[3][3];
int a,b,s,c,d=0;
for(a=0; a<=2; a++)
{
for(b=0; b<=2; b++)
{
printf("enter  no %d,%d : ",a,b);
scanf("%d",&abc[a][b]);
}
}
for(a=0; a<=2; a++)
{
s=0;
for(b=0; b<=2; b++)
{
printf("\t%d",abc[a][b]);
s=s+abc[a][b];
}
printf("\t%d",s);
printf("\n");
}
for(a=0; a<=2; a++)
{
c=0;
for(b=0; b<=2; b++)
{
c=c+abc[b][a];
d=d+abc[a][b];
}
printf("\t%d",c);
}
printf("\t%d",d);
getchar();
}