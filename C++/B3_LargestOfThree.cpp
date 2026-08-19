#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter First no:";
    cin >> a;
    cout << "Enter Second no:";
    cin >> b;
    cout << "Enter Third no:";
    cin >> c;
    if (a > b && a > c)
        cout << "a is bigger";
    else if (b > a && b > c)
        cout << "b is bigger";
    else if (c > a && c > b)
        cout << "c is bigger";
    return 0;
}