#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
system("cls");
char name1[20],name2[20];
printf("first name:");
gets(name1);
printf("second name:");
gets(name2);
if(strcmp(name1,name2)==0)
printf("same");
else
printf("not same");
getchar();
}

