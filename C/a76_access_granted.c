#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
char a;
char pass[20];
int b,c=0;
printf("\n\n\n\n\n\n\t\t\t\tEnter code : ");
while(1)
{
a=getchar();
printf("*");
b=a;
if(b==13)
break;
else
{
pass[c]=a;
c++;
}
}
pass[c]='\0';
if(strcmp(pass,"abc123")==0)
printf(" Access granted");
else
printf(" Access Denied");
return 0;
}