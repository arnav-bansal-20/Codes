#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter grade";
    cin >> a;
    if (a == 1 || a == 6)
        cout << " allowance is 10%";
    else if (a == 2 || a == 7)
        cout << " allowance is 15%";
    else if (a == 3 || a == 8)
        cout << " allowance is 18%";
    else if (a == 4 || a == 9)
        cout << " allowance is 20%";
    else if (a == 5 || a == 10)
        cout << " allowance is 22%";
    else
        cout << "An employee under this grade is covered by the special medical insurance scheme";
    return 0;
}