#include<stdio.h>
#include<math.h>
int main()
{
int a,b,i,j;
printf("first no:");
scanf("%d",&i);
printf("second no:");
scanf("%d",&j);
for(a=i; a<=j; a++)
{
b=sqrt(a);
if(b*b==a)
printf("\nperfect sq : %d",a);
}
return 0;
}
