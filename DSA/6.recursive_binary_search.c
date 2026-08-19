#include <stdio.h>
#define n 10
int binarySearch(int arr[], int low, int high, int key) {
    if (low > high)
        return -1;  // Element not found
    int mid = (low + high) / 2;
    if (arr[mid] == key)
        return mid;  // Element found
    else if (arr[mid] > key)
        return binarySearch(arr, low, mid - 1, key);  // Search left half
    else
        return binarySearch(arr, mid + 1, high, key); // Search right half
}
int main() {
    int key, result;
    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    result = binarySearch(arr, 0, n - 1, key);
    if (result == -1)
        printf("Element not found.\n");
    else
        printf("Element found at position %d (index %d)\n", result + 1, result);
    return 0;
}
