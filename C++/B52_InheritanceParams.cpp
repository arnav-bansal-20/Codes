#include <iostream>
using namespace std;

class c1
{
public:
    c1()
    {
        cout << "\nthis is constructorof c1 class.";
    }
    c1(int a, int b)
    {
        cout << "\nthis is constructor with 2 integer.";
    }
    ~c1()
    {
        cout << "\nthis is destructor of c1 class.";
    }
};

class c2 : public c1
{
public:
    c2()
    {
        cout << "\nthis is constructor of c2 class.";
    }
    c2(int a, int b, int c) : c1(a, b)
    {
        cout << "\nthis is constructor with 3 integer.";
    }
    ~c2()
    {
        cout << "\nthis is destructor of c2 class.";
    }
};

int main()
{
    c2 obj2(1, 2, 3);
    return 0;
}