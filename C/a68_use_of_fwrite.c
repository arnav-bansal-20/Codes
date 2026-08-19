#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
int main()
{
system("cls");
FILE *fp;
fp=fopen("bbb","w");
int a;
float b;
long int c;
a=100;
b=200.50;
c=300;
fwrite(&a,sizeof(int),1,fp);
fwrite(&b,sizeof(float),2,fp);
fwrite(&c,sizeof(long int),3,fp);
getchar();
}