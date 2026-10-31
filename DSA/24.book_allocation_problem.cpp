#include <iostream>
#include <vector>
using namespace std;
bool isValid(vector<int> arr, int m, int n, int maximumallowedpages)
{
    int students = 1;
    int pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maximumallowedpages)
        {
            return false;
        }
        if (pages + arr[i] <= maximumallowedpages)
        {
            pages += arr[i];
        }
        else
        {
            students++;
            pages = arr[i];
            if (students > m)
            {
                return false;
            }
        }
        return true;
    }
}
int allocatebooks(vector<int> arr, int m, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int start = 0;
    int end = sum;
    int result = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (isValid(arr, m, n, mid))
        {
            result = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return result;
}
int main()
{
    vector<int> arr = {10, 20, 30, 40};
    int m = 2; // number of students
    int n = arr.size();
    cout << allocatebooks(arr, m, n) << endl;
    return 0;
}