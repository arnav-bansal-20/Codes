#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
void disp(char *a)
{
int b=*a;
if(b>=65 && b<=90)
b=b+32;
else if(b>=97 && b<=122)
b=b-32;
*a=b;
}
int main()
{
char a;
printf("first alpha : ");
scanf("%c",&a);
disp(&a);
printf("\nf: %c",a);
return 0;
}