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
void check(struct book obj)
{
printf("\nbook no : %d",obj.bookno);
printf("\nbook name : %s",obj.bookname);
printf("\npages : %d",obj.pages);
}
int main()
{
system("cls");
struct book obj;
printf("enter : ");
scanf("%d",&obj.bookno);
printf("enter name : ");
fflush(stdin);
gets(obj.bookname);
printf("enter pages : ");
scanf("%d",&obj.pages);
check(obj);
getchar();
}