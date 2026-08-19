#include<stdio.h>
#include<string.h>
void salting(char password[]);

int main()
{
    char password[100];
    printf("Enter your password: ");
    scanf("%s", password);
    salting(password);
    return 0;
}

void salting(char password[])
{
char salt[]="1234"; // Example salt
char new_password[200];
    strcpy(new_password, password);
    strcat(new_password, salt); // Append salt to the password
   puts(new_password);
}