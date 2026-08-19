#include <iostream>
using namespace std;

int main()
{
    int a, s = 0;
    while (1)
    {
        cout << "enter value: ";
        cin >> a;
        if (a == 0)
        {
            break;
        }
        s = s + a;
    }
    cout << "sum" << s;
    return 0;
}