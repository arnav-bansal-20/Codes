#include<stdio.h>
int big(int *a,int *b,int *c)
{
if(*a>*b && *a>*c)
return *a;
else if(*b>*a && *b>*c)
return *b;
else if(*c>*a && *c>*b)
return *c;
}
int main()
{
int a,b,c,d;
printf("enter no : ");
scanf("%d",&a);
printf("enter no : ");
scanf("%d",&b);
printf("enter no : ");
scanf("%d",&c);
d=big(&a,&b,&c);
printf("largest no is : %d",d);
return 0;
}