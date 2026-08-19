#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int main()
{
system("cls");
FILE *fp;
fp=fopen("aaa","r");
char a;
do
{
a=fgetc(fp);
printf("%c",a);
}while(a!=EOF);
getchar();
}