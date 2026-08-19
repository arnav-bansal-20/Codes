#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter no:";
    cin >> a;
    if (a % 5 == 0)
        cout << "divisible by 5";
    else
        cout << "not divisible";
    return 0;
}