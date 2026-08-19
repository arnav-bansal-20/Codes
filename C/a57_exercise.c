#include<stdio.h>
int main()
{
int *a;
int b=100;
a=&b;
*a=*a+5;
printf("%d",b);
return 0;
}