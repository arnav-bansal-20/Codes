#include <iostream>
using namespace std;

int main()
{
    int a, b, d;
    cout << "First no:";
    cin >> a;
    cout << "Second no:";
    cin >> b;
    d = a - b;
    cout << "sub of no:" << d;
    if (d == a || d == b)
        cout << "\ndiff is equal to value";
    else
        cout << "\ndiff is not equal to any of these value";
    return 0;
}