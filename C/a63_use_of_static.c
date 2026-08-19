#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
void disp()
{
static int a=100;
a=a+2;
printf("\n%d",a);
}
int main()
{
system("cls");
disp();
disp();
disp();
disp();
disp();
getchar();
}