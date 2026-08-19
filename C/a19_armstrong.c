#include<stdio.h>
int main()
{
int a,b,c,s=0,re;
printf("enter no:");
scanf("%d",&a);
b=a;
while(b>0)
{
c=b%10;
s=s+c*c*c;
b=b/10;
}
if(s==a)
printf("armstrong: %d",s);
else
printf("not: %d",s);
return 0;
}


/*
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, rem, s = 0, c = 0, temp;
    
    printf("Enter number: ");
    scanf("%d", &a);

    temp = a;  // Save original number for digit counting
    while (temp > 0) {
        c++;
        temp = temp / 10;
    }

    b = a;  // Copy original number for processing again
    while (b > 0) {
        rem = b % 10;
        s += pow(rem, c);
        b = b / 10;
    }

    if (s == a)
        printf("Armstrong: %d\n", s);
    else
        printf("Not Armstrong: %d\n", s);

    return 0;
}

*/