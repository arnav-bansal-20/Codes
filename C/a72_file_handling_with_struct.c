#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
#include<string.h>
struct book
{
int bookno;
char bookname[20];
int pages;
};
int main()
{
system("cls");
FILE *fp;
fp=fopen("ddd","w");
struct book obj;
printf("enter : ");
scanf("%d",&obj.bookno);
printf("enter name : ");
fflush(stdin);
gets(obj.bookname);
printf("enter pages : ");
scanf("%d",&obj.pages);
fwrite(&obj,sizeof(struct book),1,fp);
fclose(fp);
getchar();
}