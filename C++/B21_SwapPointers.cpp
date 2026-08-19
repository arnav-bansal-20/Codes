#include <iostream>
using namespace std;

void disp(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    cout << "first : " << *a;
    cout << "\nsecond : " << *b;
}

int main()
{
    int a, b;
    cout << "first : ";
    cin >> a;
    cout << "second : ";
    cin >> b;
    disp(&a, &b);
    return 0;
}