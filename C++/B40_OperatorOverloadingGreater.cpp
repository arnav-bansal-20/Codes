#include <iostream>
using namespace std;

class c1
{
private:
    int a, b;

public:
    void accept()
    {
        cout << "Enter no: ";
        cin >> a;
    }
    void disp()
    {
        cout << "\nResult: " << a;
    }
    int operator>(c1 obj2)
    {
        if (a > obj2.a)
            return 1;
        else
            return 0;
    }
};

int main()
{
    c1 obj1, obj2;
    obj1.accept();
    obj2.accept();
    if (obj1 > obj2)
        cout << "first is bigger";
    else if (obj2 > obj1) // This requires operator> to be symmetric or we need <. But here it calls obj2.operator>(obj1).
        cout << "second is bigger";
    else
        cout << "both are equal";
    return 0;
}