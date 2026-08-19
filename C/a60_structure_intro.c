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
struct book obj;
printf("enter : ");
scanf("%d",&obj.bookno);
printf("enter name : ");
fflush(stdin);
gets(obj.bookname);
printf("\nenter pages : ");
scanf("%d",&obj.pages);
printf("\nbook no : %d",obj.bookno);
printf("\nbook name : %s",obj.bookname);
printf("\npages : %d",obj.pages);
getchar();
}




/*#include<stdio.h>
#include<string.h>
struct book
{
int bookno;
char bookname[20];
int pages;
};
void check (int bookno,char bookname[20],int pages)
{
printf("\nbook no : %d",bookno);
printf("\nbook name : %s",bookname);
printf("\npages : %d",pages);
}
int main()
{
struct book obj;
printf("enter : ");
scanf("%d",&obj.bookno);
printf("enter name : ");
fflush(stdin);
gets(obj.bookname);
printf("enter pages : ");
scanf("%d",&obj.pages);
check(obj.bookno,obj.bookname,obj.pages);
return 0;
}*/