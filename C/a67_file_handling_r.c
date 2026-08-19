#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("aaa","r");
char a;
do
{
a=fgetc(fp);
printf("%c",a);
}while(a!=EOF);
return 0;
}