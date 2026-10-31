#include <iostream>
using namespace std;
bool isPossible(int arr[], int n, int m, int minAllowedDistance)
{
    int cows = 1;
    int last_position = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - last_position >= minAllowedDistance)
        {
            cows++;
            last_position = arr[i];
            if (cows == m)
                return true;
        }
    }
    return false;
}
int aggressiveCows(int arr[], int n, int m)
{
    int s = 0;
    int e = arr[n - 1] - arr[0];
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 4, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 3;
    cout << "Largest minimum distance: " << aggressiveCows(arr, n, m) << endl;
    return 0;
}