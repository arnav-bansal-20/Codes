#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
system("cls");
char name[20],name2[20];
int a=0,b,c,d,e=0;
printf("enter name");
gets(name);
while(name2[a]!='\0')
{
a++;
}
for(c=0,d=a-1; c<d; c++,d--)
{
if(name[c]!=name[d])
{
e=1;
break;
}
}
if(e==0)
printf("palandrome");
else
printf("not");
getchar();
}
