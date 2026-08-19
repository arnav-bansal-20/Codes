#include<stdio.h>
int main()
{
int abc[10];
int a,b,c;
for(a=0; a<=9; a++)
{
printf("Enter no : ");
scanf("%d",&abc[a]);
}
for(a=9; a>=0; a--)
{
for(b=0; b<a; b++)
{
if(abc[b]>abc[b+1])
{
c=abc[b];
abc[b]=abc[b+1];
abc[b+1]=c;
}
}
}
for(a=0; a<=9; a++)
{
printf("\n%d",abc[a]);
}
return 0;
}