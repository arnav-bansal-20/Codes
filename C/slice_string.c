#include<stdio.h>
#include<string.h>
void slice(char str[], int start, int end);
int main()
{

char str[]="arnav";

    slice(str, 3, 6);
return 0;
}
void slice(char str[], int start, int end)
{
    char newstr[100];
    for(int i = start; i <= end; i++)
    {
        newstr[i - start] = str[i];
        // newstr[j]=str[i]; alternate of above line and we have to define j in the loop also
        // for(i=start, j=0; i<=end; i++, j++)
    }
    newstr[end - start + 1] = '\0'; // Null-terminate the new string
    puts(newstr); // Print the sliced string    
}