#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> &arr, int n, int m, int maximumallowedtime)
{
    int painters = 1;
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maximumallowedtime)
            return false;
        if (time + arr[i] > maximumallowedtime)
        {
            painters++;
            time = arr[i];
            if (painters > m)
                return false;
        }
        else
        {
            time += arr[i];
        }
    }
    return true;
}
int minTimeRequired(vector<int> &arr, int n, int m)
{
    int sum = 0;
    int maxval = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxval = max(maxval, arr[i]);
    }
    int st = maxval, end = sum, ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {40, 10, 20, 30};
    int n = 4, m = 2;
    cout << "Minimum time required: " << minTimeRequired(arr, n, m) << endl;
    return 0;
}