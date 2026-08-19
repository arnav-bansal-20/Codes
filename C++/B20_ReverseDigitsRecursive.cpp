#include <iostream>
using namespace std;

void disp(int a)
{
    if (a == 0)
        return;
    cout << "" << a % 10;
    disp(a / 10);
}

int main()
{
    int a;
    cout << "enter";
    cin >> a;
    disp(a);
    return 0;
}