#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
void disp(int *a)
{
*a=*a+5;
}
int main()
{
system("cls");
int a;
printf("Enter no : ");
scanf("%d",&a);
disp(&a);
printf("%d",a);
getchar();
}



