#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
extern void disp();
extern int abc;
int main()
{
disp();
abc=abc+5;
printf("\nvalue in program a65 : %d",abc);
return 0;
}