// FACTORIAL OF NUMBER
// int fact(int n)
// {
//     if (n == 1)
//         return 1;
//     else
//         return n * fact(n - 1);
// }
// int main()
// {
//     int n, res;
//     printf("\nEnter the number of which factorial to be calculated : ");
//     scanf("%d", &n);
//     res = fact(n);
//     printf("\n Factorial of number is : %d", res);
// return 0;
// }

// GCD OF TWO NUMBER
// #include <stdio.h>
// int gcd(int a, int b)
// {
//     if (a == b)
//         return a;
//     else if (a > b)
//         return gcd(a - b, b);
//     else
//         return gcd(a, b-a);
// }
// int main()
// {
//     int a, b, res;
//     printf("Enter two numbers : ");
//     scanf("%d %d", &a, &b);
//     res = gcd(a, b);
//     printf("\nGCD OF TWO NUMBERS IS : %d", res);
//     return 0;
// }

// PRODUCT OF TWO NUMBER
// #include <stdio.h>
// int mult(int a, int b)
// {
//     if (b == 0)
//         return 0;
//     else
//         return a + mult(a, b - 1);
// }
// int main()
// {
//     int a, b, res;
//     printf("Enter two numbers : ");
//     scanf("%d %d", &a, &b);
//     res = mult(a, b);
//     printf("\nPRODUCT OF TWO NUMBERS IS : %d", res);
//     return 0;
// }

// SUM OF ARRAY NUMBERS
// #include <stdio.h>
// int arr_sum(int A[10], int x)
// {
//     if (x == 1)
//         return A[0];
//     else
//         return A[x - 1] + arr_sum(A, x - 1);
// }
// int main()
// {
//     int n, res;
//     int A[10];
//     printf("Enter array size (max 10): ");
//     scanf("%d", &n);
//     printf("Enter array elements: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &A[i]);
//     }
//     res = arr_sum(A, n);
//     printf("Sum of array elements = %d\n", res);
//     return 0;
// }

// TOWER OF HANOI
#include <stdio.h>
int moves = 0;  // global counter
void tower_of_hanoi(int n, char s, char d, char t)
{
    if (n == 1)
    {
        printf("\nMove disc 1 from %c to %c", s, d);
        moves++;  // count this move
        return;
    }
    tower_of_hanoi(n - 1, s, t, d);
    printf("\nMove disc %d from %c to %c", n, s, d);
    moves++;  // count this move
    tower_of_hanoi(n - 1, t, d, s);
}
int main()
{
    int n;
    printf("Enter the number of discs: ");
    scanf("%d", &n);
    printf("\nSteps to solve Tower of Hanoi for %d discs:\n", n);
    tower_of_hanoi(n, 'S', 'D', 'T');
    printf("\n\nTotal number of moves = %d\n", moves);
    return 0;
}


// #include <stdio.h>
// #include <limits.h>

// void findSecondLargest(int arr[], int n, int index, int *max1, int *max2)
// {
//     if (index == n)
//         return;

//     if (arr[index] > *max1)
//     {
//         *max2 = *max1;
//         *max1 = arr[index];
//     }
//     else if (arr[index] > *max2 && arr[index] != *max1)
//     {
//         *max2 = arr[index];
//     }

//     findSecondLargest(arr, n, index + 1, max1, max2);
// }

// int main()
// {
//     int arr[] = {12, 45, 7, 89, 23, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int max1 = arr[0];
//     int max2 = arr[0];

//     findSecondLargest(arr, n, 0, &max1, &max2);

//     printf("Largest = %d\n", max1);
//     printf("Second Largest = %d\n", max2);

//     return 0;
// }



// #include <stdio.h>
// void findMinMax(int arr[], int n, int index, int *min, int *max)
// {
//     // Base case
//     if (index == n)
//         return;
//     // Update minimum
//     if (arr[index] < *min)
//         *min = arr[index];
//     // Update maximum
//     if (arr[index] > *max)
//         *max = arr[index];
//     // Recursive call
//     findMinMax(arr, n, index + 1, min, max);
// }
// int main()
// {
//     int arr[] = {12, 45, 7, 89, 23, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int min = arr[0];
//     int max = arr[0];
//     findMinMax(arr, n, 0, &min, &max);
//     printf("Smallest = %d\n", min);
//     printf("Largest = %d\n", max);
//     return 0;
// }
