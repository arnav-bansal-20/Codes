#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
system("cls");
char name[20];
int a=0,v=0,c=0;
printf("enter name : ");
gets(name);
while(name[a]!='\0')
{
if(name[a]=='a' || name[a]=='e' || name[a]=='i' || name[a]=='o' || name[a]=='u')
v++;
else
c++;
a++;
}
printf("vowel: %d",v);
printf("\n consonent: %d",c);
getchar();
}
