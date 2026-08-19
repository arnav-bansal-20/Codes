#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter First no:";
    cin >> a;
    cout << "Enter Second no:";
    cin >> b;
    c = a * b;
    if (c == 1000)
        cout << "product is equal 1000";
    else if (c > 1000)
        cout << "product is greater than 1000";
    return 0;
}