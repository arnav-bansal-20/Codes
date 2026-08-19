#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter First no:";
    cin >> a;
    for (b = 1; b <= 10; b++)
    {
        cout << "\n"
             << a << "\t*" << "\t" << b << "\t=" << "\t" << b * a;
    }
    return 0;
}