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
fp=fopen("ddd","r");
struct book obj;
fread(&obj,sizeof(struct book),1,fp);
printf("\nbook no : %d",obj.bookno);
printf("\nbook name : %s",obj.bookname);
printf("\npages : %d",obj.pages);
fclose(fp);
getchar();
}