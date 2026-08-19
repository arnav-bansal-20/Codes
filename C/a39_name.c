#include<stdio.h>
#include<string.h>
int main()
{
char name[20];
int a=0,b;
printf("enter name : ");
fgets(name, sizeof(name), stdin);
while(name[a]!='\0')
{
a++;
}
b=a/2;
if(a%2==0)
printf("%c%c",name[b-1],name[b]);
else
printf("%c",name[b]);
return 0;
}