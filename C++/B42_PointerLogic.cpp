#include <iostream>
using namespace std;

class c1
{
public:
    void small_test(int *a, int *b)
    {
        if (*a < *b)
            *a = -1;
        else if (*b < *a)
            *b = -1;
    }
};

int main()
{
    int a, b;
    cout << "first:";
    cin >> a;
    cout << "second:";
    cin >> b;
    c1 obj;
    obj.small_test(&a, &b);
    cout << "\nFirst" << a;
    cout << "\nsecond" << b;
    return 0;
}