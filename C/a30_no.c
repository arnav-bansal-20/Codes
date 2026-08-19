#include<stdio.h>
int main()
{
int abc[10];
int a,largest,smallest,posl=0,poss=0;
for(a=0; a<=9; a++)
{
printf("enter no:");
scanf("%d",&abc[a]);
}
largest=abc[0];
smallest=abc[0];
for(a=1; a<=9; a++)
{
if(abc[a]>largest)
{
largest=abc[a];
posl++;
}
if(abc[a]<smallest)
{smallest=abc[a];
poss++;
}
}
printf("larg: %d",largest);
printf("posl %d ",posl);
printf("\nsmall: %d",smallest);
printf("poss %d ",poss);
return 0;
}
