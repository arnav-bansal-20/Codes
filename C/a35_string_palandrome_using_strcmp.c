#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
system("cls");
char name[20],name2[20];
printf("enter name : ");
gets(name);
strcpy(name2,name);
strrev(name2);
if(strcmp(name2,name)==0)
printf("palandrome");
else
printf("not");
getchar();
}