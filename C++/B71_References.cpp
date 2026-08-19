#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int &b = a;
    cout << "a: " << a;
    cout << "\nb: " << b;
    b++;
    cout << "\na= " << a;
    cout << "\nb= " << b;
    return 0;
}