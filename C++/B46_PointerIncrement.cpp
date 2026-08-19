#include <iostream>
using namespace std;

class c1
{
public:
    void fn(int *a, int *b)
    {
        *a = *(a++);
        cout << "\n\tfirst: " << *a;
        *b = *(b++);
        cout << "\n\tsecond: " << *b;
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
    obj.fn(&a, &b);
    return 0;
}