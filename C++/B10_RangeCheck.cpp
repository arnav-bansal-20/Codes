#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter first no:";
    cin >> a;
    cout << "Enter second no:";
    cin >> b;
    cout << "Enter third no:";
    cin >> c;
    if (b > a && c > b)
        cout << " in range";
    else
        cout << "not in the range";
    return 0;
}