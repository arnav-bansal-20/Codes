#include<stdio.h>
// #include<conio.h>
#include <stdlib.h>
char check(char a)
{
if(a=='a' ||a=='e' || a=='i' ||a=='o' ||a=='u')
return 'v';
else
return 'c';
}
int main()
{
system("cls");
char a,b;
printf("enter alphabet : ");
scanf("%c",&a);
b=check(a);
if(b=='v')
printf("\nvowel");
else
printf("\nconsonent");
getchar();
}