#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("aaa","w");
char a;
printf("Enter value : ");
while(1)
{
a=getchar();
if(a==' ')
{
break;
}
else
fputc(a,fp);
}
return 0;
}