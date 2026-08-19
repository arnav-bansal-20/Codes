#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
system("cls");
FILE *fp;
fp=fopen("ccc","r");
char name[20];
fgets(name,20,fp);
printf("%s",name);
getchar();
}