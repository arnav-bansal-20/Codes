#include <iostream>
using namespace std;

class alpha
{
private:
    int a;

public:
    alpha()
    {
        cout << "\nThis is default constructor.";
    }
    alpha(int a)
    {
        cout << "\nConstructor with one integer.";
    }
    alpha(const alpha &obj) // Copy constructor typically takes const reference
    {
        cout << "\nThis is copy constructor.";
    }
};

int main()
{
    alpha obj1(50);
    alpha obj2;
    obj2 = obj1;
    alpha obj3(obj1);
    alpha obj4 = obj2;
    return 0;
}