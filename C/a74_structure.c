#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
#include<string.h>
struct book
{
int Accno;
char Accname[20];
int Balance;
};
void accept()
{
system("cls");
FILE *fp;
fp=fopen("eee","a");
struct book obj;
printf("Acc no : ");
scanf("%d",&obj.Accno);
printf("Accname : ");
fflush(stdin);
gets(obj.Accname);
printf("Balance : ");
scanf("%d",&obj.Balance);
fwrite(&obj,sizeof(struct book),1,fp);
fclose(fp);
}
void disp()
{
system("cls");
FILE *fp;
fp=fopen("eee","r");
struct book obj;
printf("\nAccno");
printf("\t\tAccname");
printf("\t\tBalance");
while(fread(&obj,sizeof(struct book),1,fp)==1)
{
printf("\n%d",obj.Accno);
printf("\t\t%s",obj.Accname);
printf("\t\t%d",obj.Balance);
}
fclose(fp);
getchar();
}
int main()
{
int d;
while(1)
{
system("cls");
printf("\n\n1.New account");
printf("\n2.Display records");
printf("\n0.Exit");
printf("\nenter choice : ");
scanf("%d",&d);
if(d==1)
{
accept();
}
else if(d==2)
{
disp();
}
else if(d==0)
{
break;
}
}
getchar();
}