#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "First side:";
    cin >> a;
    cout << "Second side:";
    cin >> b;
    cout << "Third side:";
    cin >> c;
    if (a + b > c)
        cout << "form triangle";
    else
        cout << "not";
    return 0;
}