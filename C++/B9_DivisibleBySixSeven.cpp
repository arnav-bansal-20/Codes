#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter First no:";
    cin >> a;
    if (a % 6 == 0 && a % 7 == 0)
        cout << "divisible by both";
    else
        cout << "not";
    return 0;
}