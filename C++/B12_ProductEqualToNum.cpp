#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "num1:";
    cin >> a;
    cout << "num2:";
    cin >> b;
    c = a * b;
    if (c == a)
        cout << "product is equal num1";
    else if (c > a)
        cout << "product is greater than num1";
    return 0;
}