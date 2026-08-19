#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
system("cls");
FILE *fp;
fp=fopen("ccc","w");
char name[20];
printf("enter name :");
gets(name);
fputs(name,fp);
getchar();
}