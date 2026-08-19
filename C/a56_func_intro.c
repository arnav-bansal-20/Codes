#include<stdio.h>
void disp(int a)
{
a=a+5;
}
int main()
{
int a;
printf("Enter no : ");
scanf("%d",&a);
disp(a);
printf("%d",a);
return 0;
}



